#include "libft.h"

int count_word(char const *s, char c)
{
    int i = 0;
    int count = 0;
    while (s[i] != '\0')
    {
        while (s[i] == c && s[i] != '\0')
            i++;
        if (s[i] != '\0')
            count++;
        while (s[i] != c && s[i] != '\0')
            i++;
    }
    return count;
}

char **allocate_main_array(char const *s, char c)
{
    int count = count_word(s, c);
    char **array = (char **)malloc((count + 1) * sizeof(char *));
    if (!array)
        return NULL;
    return array;
}

int word_size(char const *s, char c, int i)
{
    while (s[i] && s[i] != c)
        i++;
    return i;
}

static void process_substring(char **array, char const *s, int i, int lenght, int index)
{
    array[index] = (char *)malloc((lenght + 1) * sizeof(char));
    if (!array[index])
    {
        while (index > 0)
            free(array[--index]);
        free(array);
        return;
    }
    ft_memcpy(array[index], s + i, lenght);
    array[index][lenght] = '\0';
}
char **ft_split(char const *s, char c)
{
    int i = 0;
    int index = 0;
    int lenght;
    int count = count_word(s, c);
    char **array = allocate_main_array(s, c);
    
    while (s[i] != '\0')
    {
        while (s[i] == c)
            i++;
        lenght = 0;
        if (s[i] != c && s[i] != '\0')
        {
            lenght = word_size(s, c, i) - i;
            process_substring(array, s, i, lenght, index);
            index++;
        }
        i += lenght;
    }
    array[index] = '\0';
    return array;
}

void free_array(char **array)
{
    if (array == NULL)
        return;
    int i = 0;
    while (array[i] != NULL)
    {
        free(array[i]);
        i++;
    }
    free(array);
}



/*int main()
{
    char s[] = " Nuno Miguel Cardoso   Moreira da Silva      ";
    char c = ' ';
    char **result = ft_split(s, c);
    if (result)
    {
        int i = 0;
        while (result[i] != NULL)
        {
            printf("%s\n", result[i]);
            free(result[i]);
            i++;
        }
        free(result);
    }
    return 0;
}*/
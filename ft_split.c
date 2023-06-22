#include "libft.h"

static int count_delimitor(char const *s, char c)
{
    int count;
    int i;

    i = 0;
    count = 0;
    while (s[i] != '\0')
    {
        if (s[i] == c)
            count++;
        i++;
    }
    return count;
}

static char **allocate_array(int count)
{
    char **array = (char **)malloc((count + 2) * sizeof(char *));

    if (!array)
        return NULL;
    return array;
}

static void process_substring(char **array, char const *s, int i, int start, int index)
{
    int length = i - start;
    array[index] = (char *)malloc((length + 1) * sizeof(char));
    if (!array[index])
        return NULL;
    strncpy(array[index], s + start, length);
    array[index][length] = '\0';
    index++;
}

char **ft_split(char const *s, char c)
{
    int i = 0;
    int start = 0;
    int index = 0;
    int len = strlen(s) + 1;
    int count = count_delimitor(s, c);
    char **array = allocate_array(count);
    if (!s)
        return NULL;

    while (start < len)
    {
        if (s[i] == c || s[i] == '\0')
        {
            int length = i - start;
            if (length > 0)
            {
                process_substring(array, s, i, start, index);
                index++;
            }
            start = i + 1;
        }
        i++;
    }
    array[index] = '\0';
    return array;
}

void free_split(char **split)
{
    int i = 0;

    while (split[i])
    {
        free(split[i]);
        i++;
    }
    free(split);
}

/*int main()
{
    char *s = "Nuno Miguel Cardoso Moreira Silva";
    char c = ' ';
    char **new = ft_split(s, c);

    if (new)
    {
        int i = 0;
        while (new[i])
        {
            printf("%s\n", new[i]);
            i++;
        }
        free_split(new);
    }
}*/
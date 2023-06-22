#include "libft.h"

//Allocates with malloc and returns a copy of ’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string.
static int check_char(char const *set, char c)
{
    size_t i;
    i = 0;
    while (set[i] != '\0')
    {
        if (set[i] == c)
        {
            return 1;
        }
        i++;
    }
    return 0;
}

char *ft_strtrim(char const *s1, char const *set)
{
    size_t i = 0;
    size_t start;
    size_t end;
    char *new;

    if (!s1 || !set)
        return NULL;

    start = 0;
    while (s1[start] != '\0' && check_char(set, s1[start]))
        start++;
    end = ft_strlen(s1) - 1;
    while (end > start && check_char(set, s1[end]))
        end--;

    new = (char *)malloc((end - start + 2) * sizeof(char));
    if (!new)
        return NULL;

    while (end >= start)
    {
        new[i++] = s1[start++];
    }
    new[i] = '\0';
    return new;
}

/*int main()
{
    const char *s1 = "-nuno-silva-";
    const char *set = "-";
    char *result = ft_strtrim(s1, set);
    printf("%s\n", result);
    free(result);
}*/
#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;
    size_t result;

    result = 0;
    i = 0;

    while (s1[i] && s2[i] && i < n)
    {
        result = s1[i] - s2[i];
        if (result != 0)
            return result;
        i++;
    }

    if (i < n)
        result = s1[i] - s2[i];

    return result;
}

/*int main()
{
    char s1[] = "Nuno";
    char s2[] = "NunO";
    size_t n = 2;

    int comparison = ft_strncmp(s1 ,s2 ,n);
    printf("%d\n", comparison);
}*/
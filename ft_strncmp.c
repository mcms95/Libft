#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    int i;
    int result;
    result = 0;
    i = 0;
    
    while(s1[i] && s2[i] && i < (n -1))
    {
        result = s1[i] - s2[i];
        i++;
    }
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
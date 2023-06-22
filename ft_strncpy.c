#include "libft.h"

char *ft_strncpy(char *dest, const char *src, size_t n)
{
    size_t i;
    i = 0;
    while(i < n)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

int main()
{
    char src[] = "Nuno Silva";
    size_t n = 6;
    size_t len = ft_strlen(src);
    char dest[len];
    printf("%s\n",ft_strncpy(dest, src, n));
}
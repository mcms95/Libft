#include "libft.h"

char *ft_strdup(const char *s)
{
    int i;
    char *dest;
    i = 0;

    while(s[i] != '\0')
        i++;
    
    dest = (char *)malloc(i * sizeof(char) + 1);
    
    if (dest == NULL)
        return 0;

    i = 0;
    while(s[i] != '\0')
    {
        dest[i] = s[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

/*int main()
{
    char *src = " Nuno";
    printf("%s\n", ft_strdup(src));
}*/
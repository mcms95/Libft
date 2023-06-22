#include "libft.h"

char *ft_strdup(const char *s)
{
    int i = 0;
    char *dest;
    
    while (s[i] != '\0')
        i++;
    
    dest = (char *)malloc((i + 1) * sizeof(char));
    
    if (dest == NULL)
        return NULL;

    i = 0;
    while (s[i] != '\0')
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
#include "libft.h"

size_t ft_strlen(const char *str)
{
    int i = 0;
    
    while (str[i] != '\0')
    {
        i++;
    }
    
    return i;
}

/*int main()
{
    char *s= "nuno";
    printf("%ld\n", ft_strlen(s));
}*/
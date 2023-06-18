#include <string.h>
#include <stdio.h>

char *ft_strchr(const char *s, int c)
{
    int i;
    i = 0;
    while(s[i])
    {
        if (s[i] == (char) c)
        {
            return(char *)&s[i];
        }
        i++;
    }
    return NULL; 
}

/*int main()
{
    char str[] = "Nuno Silva";
    char c = ' ';

    printf("%s\n", strchr( str, c));
    printf("%s\n", ft_strchr( str, c));
}*/
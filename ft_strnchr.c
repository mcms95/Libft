#include <string.h>
#include <stdio.h>

char *ft_strrchr(const char *s, int c)
{
    int i;
    i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    while(i > 0)
    {
        if(s[i] == c)
        {
            return(char *)&s[i];
        }
        i--;
    }
    return NULL;
}

/*int main()
{
    char str[] = "Nuno Silva";
    char c = ' ';

    printf("%s\n", strrchr( str, c));
    printf("%s\n", ft_strrchr( str, c));
}*/
#include "libft.h"

//Applies the function ’f’ to each character of the string ’s’, and passing its index as first argument
// to create a new string with malloc resulting from successive applications of ’f’.

/*char increment(unsigned index, char c)
{
    return c + 1;
}*/

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int i;
    char *str;

    if (!s)
        return NULL;
    i = ft_strlen(s);
    str = (char *)malloc(i + 1 * sizeof(char));
    if (!str)
        return NULL;
    i = 0;
    while (s[i] != '\0')
    {
        str[i] = f(i, s[i]);
        i++;
    }
    str[i] = '\0';
    return str;
}

/*int main()
{
    const char *s = "abc";
    char *result = ft_strmapi(s, increment);
    printf("%s\n", result);
}*/
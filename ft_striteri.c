#include "libft.h"

//Applies the function ’f’ on each character of the string passed as argument, passing its indexas first argument.
//Each character is passed by address to ’f’ to be modified if necessary

/*void increment(unsigned index, char *c)
{
    *c = *c + 1;
}*/

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    int i;
    i = 0;
    if (!s)
        return;
    while(s[i] != '\0')
    {
        f(i, &s[i]);
        i++;
    }
}

/*int main()
{
    char s[] = "abc";
    ft_striteri(s, increment);
    printf("%s\n", s);

    return 0;
}*/
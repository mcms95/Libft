#include "libft.h"

// Allocates with malloc and returns a string representing the integer received as an argument. 
// Negative numbers must be handled.

static int len(int n)
{
    int i;
    i = 0;
    if (n == 0)
        return 1;
    else if (n < 0)
    {
        n *= -1;
        i++;
    }
    while (n > 0)
    {
        n /= 10;
        i++;
    }
    return i;
}


char *ft_itoa(int n)
{
    char *str;
    int i;
    i = len(n);
    str = (char *)malloc((i + 1) * sizeof(char));
    if (!str)
        return NULL;
    if (n == 0)
        str[0] = '0';
    else if (n < 0)
    {
        str[0] = '-';
        n = -n;
    }
    str[i] = '\0';
    while (n > 0)
    {
        str[--i] = n % 10 + '0';
        n /= 10;
    }
    return str;
}


/*int main()
{
    int n = -422342;
    printf("%s\n", ft_itoa(n));
}*/
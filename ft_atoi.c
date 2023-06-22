#include "libft.h"

int ft_atoi(const char *str)
{
    int i;
    int sign;
    int number;
    
    number = 0;
    i = 0;
    sign = 1;
    
    while (str[i] == '\t' || str[i] == '\v' || str[i] == '\n'
           || str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
    {
        i++;
    }    
    
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
        {
            sign = -1;
        }     
        i++; 
    }
    
    while (str[i] >= '0' && str[i] <= '9')
    {
        number = (str[i] - '0') + (number * 10);
        i++;
    }
    
    return (number * sign); 
}


/*int main()
{
	char *str = "-++++---1";
	ft_atoi(str);
	printf("%d\n", ft_atoi(str));
}*/
#include <stdio.h> 
int ft_isalpha(int c)
{
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

/*int main()
{
    int c = 'a';
    int result = ft_isalpha(c);
    printf("%d\n", result);

    return 0;
}*/
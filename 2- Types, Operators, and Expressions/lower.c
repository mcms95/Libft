#include <stdio.h>

char lower(char c)
{
    if (c >= 'A' && c <= 'Z')
    {
        c += 32;
    }
    return c;
    
}
int main()
{
    char c;
    printf("Enter a character:\n");
    scanf("%c", &c);
    c  = lower(c);
    printf("Lower: %c\n", c);
}
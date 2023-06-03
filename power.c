#include <stdio.h>

int  power(int x, int p);

int main()
{   
    int  result = power(2, 2);
    printf("%d\n", result);

}

int power(int x, int p)
{
    int i;
    i = 1;
    while(i < p)
    {
        x *= p;
        i++;
    }
    return (x);

}
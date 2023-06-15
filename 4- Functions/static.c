#include <stdio.h>
static int i = 0;

int    bump()
{
    printf("returns %d\n", i);
    i++;
}

int main()
{   int count = 0;
    while(count < 5)
    {
        bump();
        count++;
    }
    return 0;
}

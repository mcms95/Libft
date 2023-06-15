#include <stdio.h>
extern int i;

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

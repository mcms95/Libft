#include <stdio.h>

int main()
{
    long wc = 0;
    int c;
    while(( c = getchar()) != EOF)  
    {
        wc++;
    }
    printf("%ld\n", wc);
    return 0;


}
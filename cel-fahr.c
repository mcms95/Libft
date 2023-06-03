#include <stdio.h>

#define   LOWER  0
#define   UPPER 300
#define   STEP  20

int main()
{
    float celcius, fahr;
    
    fahr = LOWER;

    while ( fahr < UPPER)
    {
        celcius = (5.0/9.0) * (fahr-32.0);
        printf("%4.0f %6.1f\n", fahr, celcius);
        fahr += STEP;

    }
    return 0;
}
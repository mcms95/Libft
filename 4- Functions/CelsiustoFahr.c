#include <stdio.h>

int    convert(int celsius)
{
    int result = (celsius * 9/5) + 32;
    return result;
}

int main()
{
    int celsius = 40;
    int result = convert(celsius);
    printf("Fahr: %d\n", result);
}

#include <stdio.h>

void    intotobinary(int decimal)
{
    int i = 0;
    char binary[32];

    if (decimal == 0)
    {
        binary[i] = '0';
        i++;
    }
    while (decimal != 0)
    {
        binary [i] = (decimal % 2) + '0';
        decimal /= 2;
        i++;
    }
    binary[i] = '\0';

    int start = 0;
    int end = i -1;
    char tmp;
    while(start < end)
    {
        tmp = binary[start];
        binary[start] = binary[end];
        binary[end] = tmp;
        start++;
        end--;   
    }

    printf("Binary representacion: %s\n", binary);
}

void    inttohex(int decimal)
{
    int i = 0;
    char hex[32];

    if (decimal == 0)
    {
        hex[i] = '0';
        i++;
    }
    while (decimal != 0)
    {
        hex [i] = decimal % 16;
        if (hex[i] < 10)
        {
            hex[i] = hex[i] + '0';
        }
        else
            hex[i] = hex[i] -10 + 'A';
        decimal /= 16;
        i++;
    }
    hex[i] = '\0';

    int start = 0;
    int end = i -1;
    char tmp;
    while(start < end)
    {
        tmp = hex[start];
        hex[start] = hex[end];
        hex[end] = tmp;
        start++;
        end--;   
    }

    printf("Hex representation: %s\n", hex);
}



int main()
{
    int number = 543.;
    intotobinary(number);
    inttohex(number);
    
    return 0;
}
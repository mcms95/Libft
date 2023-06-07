#include <stdio.h>

int HextoDecimal(char str[])
{
    int base = 1;
    int i = 0;
    int decimal = 0;

    while (str[i] != '\0')
    {
        i++;
    }
    i--;

    while (i >= 0)
    {
        int digitValue;
        if (str[i] >= '0' && str[i] <= '9')
        {
            digitValue = str[i] - '0';
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            digitValue = str[i] - 'A' + 10;
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            digitValue = str[i] - 'a' + 10;
        }
        else
        {
            printf("Invalid hex number\n");
        }

        decimal += digitValue *  base;
        base *= 16;
        i--;
    }
    return decimal;
    

}
int main()
{   
    char hex[20];
    printf("Choose a number:\n");
    scanf("%s", hex);
    int decimal = HextoDecimal(hex);
    
    printf("The decimal of hex:%s is decimal:%d\n", hex, decimal);

}
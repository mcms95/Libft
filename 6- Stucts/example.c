#include <stdio.h>

int main()
{
    struct var
    {
        double x;
        double y;
    };
    struct var v1, v2;

    v1.x = 6.0;
    v1.y = 12.0;
    v2 = v1;

    printf("\nv1 x=%.2f y=%f\n", v1.x, v1.y);
    printf("v2 x=%.2f y=%f\n", v2.x, v2.y);
    
}
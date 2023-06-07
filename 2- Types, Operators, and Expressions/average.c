#include <stdio.h>



int main()
{
    int number, total = 0, total_number = 0;
    printf("Enter 0 to stop\n");
    while(1)
    {
        printf("Enter a number:\n");
        scanf("%d", &number);

        if (number == 0)
            break;
        

        total += number;
        total_number++;
    }
    int average = total / total_number;

    printf("The total is %d, and the average is%d\n", total, average);

}
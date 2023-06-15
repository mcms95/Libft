#include <stdio.h>
#include <string.h>

void process(char *line)
{
    int i = 0;
    printf("\nString: %s\n",line);
    while (line[i] != '\0')
    {
        if (line[i] == ' ')
        {
            line[i] = '-';
        }
        i++;
    }
    printf("Count = %d", i);
    if (i > 10)
    {
        printf("\nThe 9th element is: %c", line[9]);
    }
    printf("\nString: %s\n",line);

    
}

int main() {
    char line[1000];
    strcpy(line,"Hi there and welcome to LBS290");
    process(line);
    strcpy(line,"I love C");
    process(line);
}
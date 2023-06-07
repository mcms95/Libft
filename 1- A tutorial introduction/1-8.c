#include <stdio.h>

void    transform(char str[])
{
    int i = 0;
    int j = 0;

    while(str[i] != '\0')
    {
        if(str[i] == ' ')
        {
            str[i] = '\n';
        }
        i++;
    }
}

int main()
{
    char text[] = "But soft what light through yonder window breaks";
    transform(text);    
    printf("%s\n", text);
}
#include <stdio.h>

void    transform(char str[])
{
    int i = 0;
    int j = 0;

    while(str[i] != '\0')
    {
        if(str[i] == ' ' && str[i + 1] == ' ')
        { 
            i++;
        }
        else
        {
            str[j] = str[i];
            i++;
            j++;
        }
    }
    str[j]= '\0';
}

int main()
{
    char text[] = "But soft  what light     through yonder window breaks\nIt is    the east and  Juliet is the sun\nArise fair sun   and kill the envious moon\nWho  is  already  sick  and  pale  with  grief\n";
    transform(text);    
    printf("%s\n", text);
}
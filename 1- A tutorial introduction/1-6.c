#include <stdio.h>

int count_lines(char str[])
{
    int i = 0;
    int cnw = 0;
    while(str[i] != '\0')
    {
        if (str[i] == '\n')
        {
            cnw++;
        }
        i++;
    }
    return cnw;

}
int count_spaces(char str[])
{
    int i = 0;
    int cs = 0;
    while(str[i] != '\0')
    {
        if (str[i] == ' ')
        {
            cs++;
        }
        i++;
    }
    return cs;

}

int main() /* count new lines in input */
{
    char text[] = "But soft what light through yonder window breaks\nIt is the east and Juliet is the sun\nArise fair sun and kill the envious moon\nWho is already sick and pale with grief";
    int count_nw = count_lines(text);
    int count_cs = count_spaces(text);
    printf("The number of lines is %d and the number of spaces is %d\n", count_nw, count_cs);
}
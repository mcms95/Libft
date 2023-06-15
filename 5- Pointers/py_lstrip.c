#include <stdio.h>
#include <string.h>

void py_lstrip(char *str)
{
    int i = 0;
    int j = 0;

    while (str[i] == ' ' || str[i] == '\t')
    {   
        i++;
    }
    while (str[i] != '\0')
    {
        str[j++] = str[i++];
    }
    str[j] = '\0';
}

int main() {
    char s1[] = "   Hello   World    ";
    py_lstrip(s1);
    printf("-%s-\n", s1);
}
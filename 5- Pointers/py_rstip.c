#include <stdio.h>
#include <string.h>

int len(char *str)
{
    int i = 0;
    while (*str != '\0'){
        *str++;
        i++;
    }
    return --i;
}

void py_rstrip(char *str)
{
    int final = len(str);
    while (str[final] == ' ')
    {
        str[final] = '\0';
        final--;
    }

}

int main() {
    char s1[] = "   Hello   World    ";
    py_rstrip(s1);
    printf("-%s-\n", s1);
}
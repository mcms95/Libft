#include <unistd.h>

void printline(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++;
    }
    write(1, "\n", 1);
}

int main()
{
    char s[] = "nuno";
    printline(s);
}
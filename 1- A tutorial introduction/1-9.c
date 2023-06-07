#include <stdio.h>

int str_len(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;

}

void reverse(char str[])
{
    int start = 0;
    int end = str_len(str);
    int mid = end /2;
    char tmp[end];
    end--;
    while ( start < mid)
    {
        tmp[start] = str[end];
        str[end] = str[start];
        str[start] = tmp[start];
        start++;
        end--;
    }
}

int main()
{
    char text[] = "Hello world";
    reverse(text);
    printf("%s\n", text);

}

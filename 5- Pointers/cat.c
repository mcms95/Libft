#include <stdio.h>

int main()
{
    char src[100];
    char dest[100];
    int i = 0;
    int j = 0;
    printf("Enter two strings:\n");
    scanf("%s", src);
    scanf("%s", dest);
    while (src[i] != '\0')
    {
        i++;
    }
    while (dest[j] != '\0')
    {
        src[i++] = dest[j++];
    }
    src[i] = '\0';
    
    printf("%s\n", src);
}
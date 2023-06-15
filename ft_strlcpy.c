#include <stdio.h>
#include <stddef.h>
#include <string.h>

size_t strlcpy(char *dest, const char *src, size_t size)
{
    unsigned i;
    unsigned count;
    i = 0;
    count = 0;

    while (src[count] != '\0')
        count++;
    if (size != 0)
    {
        while (src[i] != '\0' && i < (size - 1))
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }
    return count;
}

/*int main()
{
    char src[] = "Hello, world!";
    char dest[10];

    size_t length = strlcpy(dest, src, sizeof(dest));

    printf("Source Length: %zu\n", strlen(src));
    printf("Destination Length: %zu\n", length);
    printf("Destination String: %s\n", dest);

    return 0;
}*/
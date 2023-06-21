#include "libft.h"

size_t strlcat(char *dest, const char *src, size_t size)
{
    unsigned i;
    unsigned j;
    i = 0;
    j = 0;
    while( dest[i] != '\0')
    {
        i++;
    }
    if (size != 0)
    {
        while (src[j] != '\0' && i < (size -1))
        {
            dest[i++] = src[j++];
        }
        dest[i] = '\0';
    }
    return i;

}

/*int main()
{
    char dest[20] = "Hello";
    char src[] = ", world!";
    
    size_t result = strlcat(dest, src, sizeof(dest));

    printf("Resulting string: %s\n", dest);
    printf("Length of the resulting string: %zu\n", result);

    return 0;
}*/
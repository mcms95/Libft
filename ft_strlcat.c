#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t i;
    size_t src_size;
    size_t dest_size;

    if (!dest && !size)
        return (0);
    i = ft_strlen(dest);
    src_size = ft_strlen(src);
    dest_size = i;
    if (i >= size)
        return (src_size + size);

    while (*src != '\0' && (i + 1) < size)
    {
        dest[i++] = *src++;
    }     
    dest[i] = '\0';
    return (dest_size + src_size);
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
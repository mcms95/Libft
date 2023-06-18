#include <string.h>
#include <stdio.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;
    i = 0;

    if(!dest && !src)
    {
        return NULL;
    }
    while(i < n)
    {
        *(unsigned char *)(dest + i) = *(unsigned char *)(src + i);
        i++;
    }
    return dest;
}

/*int main()
{
    unsigned char dest[5];
    unsigned char src[] = "Nuno";
    size_t n = 2;
    printf("%s\n", memcpy(dest, src, n));
    printf("%s\n", ft_memcpy(dest, src, n));
}*/
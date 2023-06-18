#include <string.h>
#include <stdio.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t i;
    i = 0;

    if(!dest && !src)
    {
        return NULL;
    }
    if (dest == src)
        return dest;

    else if (dest < src)
    {
        while (i < n)
        {
            *(unsigned char *)(dest + i) = *(unsigned char*)(src + i);
            i++;
        }
    }
    else
    {
        size_t i = n;
        while (i > 0)
        {
                *(unsigned char *)(dest + i - 1) = *(unsigned char*)(src + i - 1);
                i--;
        }
    }
    return dest;
}

/*int main()
{
    size_t n = 3;
    char src[] = "Nuno";
    char dest[] = "Joana";

    printf("%s\n", memmove(dest, src, n));
    printf("%s\n", ft_memmove(dest, src, n));

}*/
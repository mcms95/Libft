#include "libft.h"

void *ft_memchr(void *s, int c, size_t n)
{
    size_t i;
    i = 0;
    while (i < n)
    {
        if (*(unsigned char *)(s + i) == (unsigned char)c)
        {
            return (s + i);
        }
        i++;
    }
    return NULL;
}


/*int main()
{
    char s[] = "Nuno Miguel";
    int c = 'o';
    size_t n = 12;
    printf("%p\n",memchr(s, c, n));
    printf("%p\n",ft_memchr(s, c, n));
}*/
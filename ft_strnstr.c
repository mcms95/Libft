#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t n)
{
    size_t i;
    size_t needle_len = strlen(needle);
    i = 0;
    
    if (n == 0)
        return NULL;
    if (needle_len == 0)
        return ((char *)haystack);
    
    while(haystack[i] && i <= n - needle_len)
    {
        if(ft_strncmp(&haystack[i], needle, needle_len) == 0)
        {
            return (char *)&haystack[i]; 
        }
        i++;
        
    }  
    return NULL;  
}

/*int main()
{
    const char s1[] = "Nuno Miguel Silva";
    const char s2[] = " ";
    size_t n = 10;

    printf("%s\n", ft_strnstr(s1,s2,n));
    return 0;
}*/

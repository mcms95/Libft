#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
    size_t total = nmemb * size;

    void *ptr = malloc(total);
    
    if(!ptr)
        return NULL;
    
    memset(ptr, 0, total);
    
    return ptr;
}

/*int main()
{
    size_t i = 0;
    size_t nmemb = 5;
    size_t size = sizeof(int);

    int* array = ft_calloc(nmemb, size);
    if (array != NULL)
    {
        while (i < nmemb)
        {
            printf("%d", array[i]);
            i++;
        }
        printf("\n");
        free(array);
        
    }
    else
    {
        printf("Fail");
    }
    return 0;
}*/
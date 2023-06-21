/*#include "libft.h"

//Allocates with malloc and returns an array of strings obtained by splitting ’s’ using the
//character ’c’ as a delimiter. The array must end with a NULL pointer.

int count_delimiter(char const *s, char c)
{
    int i;
    int count;
    i = 0;
    count = 0;
    while(s[i] != '\0')
    {
        if (s[i] == c)
            count++;
        i++;
    }
    return count;   
}

char **ft_split(char const *s, char c)
{
    //i to 0 to track the current position in the input string s 
    //j to 0 to mark the start of a substring 
    //k to 0 to keep track of the current index in the result array

    int i = 0, j = 0, k = 0;
    int len = ft_strlen(s);
    int num_substrings = count(s,c);
    int lenght = 0;

    char *array = (char *)malloc((num_substrings + 1) * sizeof(char));
    if (!array)
        return NULL;
    
    while(i <= len)
    {
        if (s[i] == c || s[i] = '\0')
        {
            lenght = i - j;
            if (lenght > 0)
            {
                array[k] = (char *)malloc((lenght + 1) * sizeof(char));
                if (!array)
                    return NULL;
                ft_strn
            }
        }
    }
    


    
}

int main()
{
    char s[] = "Nuno, Miguel, Silva";
    char c = ',';
    printf("%d\n", count(s, c));
}
*/
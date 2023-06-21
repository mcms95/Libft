//Allocates with malloc and returns an array of strings obtained by splitting ’s’ using the
//character ’c’ as a delimiter. The array must end with a NULL pointer.

char **ft_split(char const *s, char c)
{

}

int main()
{
    char s[] = "Nuno, Miguel, Silva";
    char c = ',';
    printf("%s\n", ft_split(s, c));
}

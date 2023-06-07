#include <stdio.h>

void expand(char s[], char t[])
{
    int i=0, j=0;
    char ch;

    while ((ch = s[i]) != '\0')
    {
        switch(ch){
            case '\n':
                t[j] = '\\';
                t[++j] = 'n';
                break;
            case '\t':
                t[j] = '\\';
                t[++j] = 't';
                break;
            default:
                t[j] = ch;
                break;
        }
        j++;   
    i++;
    }
    t[j] = '\0';   
}

int main() {
    char s[] = "Hello,\n\tWorld!";
    char t[100]; // Assuming enough space is allocated for the expanded string
    
    expand(s, t);
    
    printf("%s\n", t);
    
    return 0;
}


#include <stdio.h>
#include  <unistd.h>
#include <string.h>

void printLine(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++;
    }
    write(1, "\n", 1);
}

int compareLines(char src[], char dest[])
{
    int i = 0;
    while ( src[i] != '\0' && dest[i] != '\0')
    {
        if ( src[i] != dest[i]){
            return 0; // strings are diferent
        }
        i++;
    }
    if (src[i] == '\0' && dest[i] == '\0')
    {
        return 1; // strings are same lenght
    }
    return 0; //lines are diferent lenght

}
int main(int argc, char *argv[]) {
    char currentLine[100];
    char previousLine[100] = "";
    int isFirstLine = 1;
    int isPreviousLinePrinted = 0;

    for (int i = 1; i < argc; i++) {
        strcpy(currentLine, argv[i]);  // Copy the current command line argument to the current line array

        if (isFirstLine || !compareLines(currentLine, previousLine)) {            
            printLine(currentLine);  // Print the line if it's the first line or different from the previous line
            isPreviousLinePrinted = 1;
        } else {
            isPreviousLinePrinted = 0;
        }

        if (currentLine[0] == '\0') {
            break;  // Exit the loop when an empty line is encountered
        }

        strcpy(previousLine, currentLine);  // Copy the current line to the previous line array

        isFirstLine = 0;
    }

    return 0;
}
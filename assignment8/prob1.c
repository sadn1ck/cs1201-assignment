#include <stdio.h>
#include <string.h>
char upper(char inp)
{
    if ((int)inp >= 97)
    {
        return (char)((int)inp - 32);
    }
    else
    {
        return inp;
    }
}
int main(void)
{
    char string[500];
    char temp;
    printf("Enter a string to convert to uppercase: ");
    fgets(string, 500, stdin);
    int i, j;
    int n = strlen(string);
    char upperArr[n];
    printf("String after converting to uppercase: ");
    for (int i = 0; i < n; i++)
    {
        printf("%c", upper(string[i]));
    }
}
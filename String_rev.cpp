#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];
    printf("Enter a string:");
    scanf("%[^\n]s", str);
    char str2[50];
    strcpy(str2, str);

    int length = strlen(str);
    for (int i = 0; i < length / 2; i++)
    {
        char temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }
    // printf("Reverse string: %s\n", str);
    int s = strcmp(str, str2);
    if (s == 0)
    {
        printf("It is palindrome..");
    }
    else
    {
        printf("It doessn't palindrome..");
    }
    return 0;
}
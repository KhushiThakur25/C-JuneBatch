#include <stdio.h>
#include <string.h>

int main()
{
    char a, b, str[100];
    printf("Enter the string..\n");
    scanf("%s", str);

    // Clear the input buffer to avoid issues when reading characters
    while ((getchar()) != '\n');

    printf("Enter the character to be replaced..\n");
    scanf("%c", &a);

    // Clear the input buffer again to avoid issues when reading the next character
    while ((getchar()) != '\n');

    printf("Enter the character to replace..\n");
    scanf("%c", &b);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == a)
        {
            str[i] = b;
        }
    }
    printf("The new string is %s\n", str);

    return 0;
}

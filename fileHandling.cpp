#include <stdio.h>

int main()
{
    FILE *filePointer;
    char text[100];
    filePointer = fopen("data.txt", "r+");

    if (filePointer == NULL)
    {
        printf("There is no file to open..");
    }

    printf("Enter the text about 100 chars..");
    fgets(text, sizeof(text), stdin);
    fputs(text, filePointer);

    fclose(filePointer);
    return 0;
    
}
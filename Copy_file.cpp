#include <stdio.h>
int main()
{
    FILE *SourceFile, *DestinationFile;
    char c;
    SourceFile = fopen("data.txt", "r");
    if (SourceFile == NULL)
    {
        printf("There is no file to open..");
    }

    DestinationFile = fopen("data_4.txt", "w");
    c = fgetc(SourceFile);
    while (c != EOF)
    {
        fputc(c, DestinationFile);
        c = fgetc(SourceFile);
    }
    fclose(SourceFile);
    fclose(DestinationFile);
    return 0;
}
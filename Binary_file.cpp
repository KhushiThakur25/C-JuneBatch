#include <stdio.h>

struct Person
{
    char name[20];
    int age;
} person;

int main()
{
    FILE *ptr;
    printf("Enter the name of the person.");
    scanf("%s", &person.name);
    printf("Enter the age of the person.");
    scanf("%d", &person.age);
    ptr = fopen("Person_1.txt", "wb");

    if (ptr == NULL)
    {
        printf("There is nothing..");
    }
    fwrite(&person, sizeof(person.name), 1, ptr);
    fwrite(&person, sizeof(person.age), 1, ptr);
    fclose(ptr);

    ptr = fopen("Person_1.bin", "rb");

    if (ptr == NULL)
    {
        printf("There is nothing..");
    }
    fread(&person, sizeof(struct Person), 1, ptr);
    printf(" name is:%s", person.name);
    fclose(ptr);

    return 0;
}

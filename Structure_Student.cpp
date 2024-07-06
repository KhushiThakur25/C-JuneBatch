#include <stdio.h>
#include <string.h>
struct Student
{
    int roll_no;
    char a;
    char name[50];
    float marks;
};
int main()
{
    struct Student students[3];
    int x;
    char str[20];
    float z;

    // students[0].roll_no = 101;
    // strcpy(students[0].name, "Aira");
    // students[0].marks = 85.58;

    // students[1].roll_no = 102;
    // strcpy(students[1].name, "ritika");
    // students[1].marks = 65.58;

    // students[2].roll_no = 103;
    // strcpy(students[2].name, "riya");
    // students[2].marks = 95.58;

    for (int i = 0; i < 3; i++)
    {
        printf("Enter Students roll no.:\n");
        scanf("%d", &x);
        students[i].roll_no = x;
        printf("Enter Students name.:\n");
        scanf("%s", str);
        strcpy(students[i].name, str);
        printf("Enter Students marks:\n");
        scanf("%f", &z);
        students[i].marks = z;
        printf("\n");
    }

    for (int i = 0; i < 3; i++)
    {
        printf("Students roll no.: %d\n", students[i].roll_no);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }
    return 0;
}
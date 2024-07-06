#include <stdio.h>
struct Employee
{
    int id;
    int age;
    char name[20];
} emp1, emp2, emp3;
void printValues()
{
    printf("The value is %d", emp2.id);
}
int main()
{
    struct Employee;
    emp1.id = 101;
    emp2.id = 102;
    emp3.id = 103;
    printf("Enter the name for emp2..");
    scanf("%s",&emp2.name);
    printValues();
    return 0;
}
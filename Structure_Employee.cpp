#include <stdio.h>
#include <string.h>
// define a structure for an employee
struct Employee
{
    int empID;
    char name[20];
    float salary;
};

int main()
{
    // declare a variable of type employee
    struct Employee emp1, emp2;

    // Initialize the members of the structure
    emp1.empID = 101;
    strcpy(emp1.name, "Aira ");
    emp1.salary = 50000.0;

    emp2.empID = 102;
    strcpy(emp2.name, "Khushi ");
    emp2.salary = 45000.0;

    // Print the details of the employee
    printf("Employee Id: %d\n", emp1.empID);
    printf("Name: %s\n", emp1.name);
    printf("Salary: %.2f\n", emp1.salary);

    printf("Employee Id: %d\n", emp2.empID);
    printf("Name: %s\n", emp2.name);
    printf("Salary: %.2f\n", emp2.salary);

    return 0;
}
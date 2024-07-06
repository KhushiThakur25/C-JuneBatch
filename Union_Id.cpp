#include <stdio.h>

union Id
{
    int studentId;
    long employeeId;
};
int main()
{
    // declare variable of type Id
    union Id id;

    id.studentId = 12345;
    id.employeeId = 469557841554562;

    printf("Student Id %d\n", id.studentId);
    printf("Employee Id %d\n", id.employeeId);

        // printf("Student Id %d\n", id.studentId);
    // printf("Employee Id %d\n", id.employeeId);

    return 0;
}

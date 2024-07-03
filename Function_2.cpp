// Function with no arguments and  return value
#include <stdio.h>

int sum()
{
    int a = 5;
    int b = 6;
    return (a + b);
}

// Driver code
int main()
{
    int ans = sum();
    printf("%d is sum of a and b..", ans);
    return 0;
}
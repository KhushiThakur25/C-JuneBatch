#include <stdio.h>

int main()
{
    int x, n;
    double sum = 1.0, term = 1.0, fact = 1.0;

    printf("Enter the value of x:");
    scanf("%d", &x);

    printf("Enter the value of n:");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        term *= x;
        fact *= i;
        sum += term / fact;
    }

    printf("sum of the series: %.2f\n", sum);
    return 0;
}
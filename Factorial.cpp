#include <stdio.h>
int main()
{
    int fact = 1;
    int n = 5;
    for (int i = 2; i <= n; i++)
    {
        fact *= i;
    }
    printf("%d ", fact);
    return 0;

    
}

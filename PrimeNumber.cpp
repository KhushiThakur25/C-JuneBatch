#include <stdio.h>
int main()
{
    int n = 15;
    bool flag = true;
    if (n == 0 || n == 1)
    {
        printf("Number  is not a prime..\n");
    }
    for (int i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = false;
            break;
        }
    }
    if (!flag)
    {
        printf("Number is not a prime.\n");
    }
    else
    {
        printf("Number is prime\n");
    }
    return 0;
}
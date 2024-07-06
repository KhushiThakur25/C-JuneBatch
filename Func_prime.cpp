#include <stdio.h>

int prime_no(int n, bool flag)
{
    if (n == 0 || n == 1)
    {

        return false;
    }
    for (int i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = false;
        }
    }
    return flag;
}
int main()
{
    int n = 20;
    bool flag = prime_no(n, true);

    if (flag)
    {
        printf("Number is prime\n");
        
    }
    else
    {
        printf("Number is not a prime.\n");
    }
    return 0;
}
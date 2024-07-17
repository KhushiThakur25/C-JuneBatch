#include <stdio.h>
int main()
{
    int num;
    printf("Enter any number:\n");
    scanf("%d", &num);
    for (int j = 1; j < num; j++)
    {
        bool prime = true;
        int i = 2;
        while (i <= j / 2)
        {
            if (j % i == 0)
            {
                prime = false;
                break;
            }
            else
            {
                prime = true;
            }

            i += 1;
        }
        if (prime)
        {
            printf("%d\n", j);
        }
    }
    return 0;
}
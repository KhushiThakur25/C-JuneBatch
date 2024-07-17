#include <stdio.h>
#include <math.h>

int main()
{
    for (int n = 1; n <= 1000; n++)
    {
        int sum = 0, count = 0, org = n;
        int temp = n; // Use a temporary variable to count the digits
        while (temp > 0)
        {
            count += 1;
            temp /= 10;
        }
        temp = n; // Reset temp to the original number
        while (temp > 0)
        {
            sum += pow(temp % 10, count);
            temp /= 10;
        }
        if (sum == org)
        {
            printf("%d ", org);
        }
    }

    return 0;
}

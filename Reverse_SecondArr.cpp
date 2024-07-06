#include <stdio.h>
int main()
{
    int arr[5] = {3, 21, 6, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int j = 0;
    int dp[5];
    for (int i = n - 1; i >= 0; i--)
    {
        dp[j] = arr[i];
        j++;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", dp[i]);
    }

    return 0;
}
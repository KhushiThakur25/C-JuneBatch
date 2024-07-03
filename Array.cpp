#include <stdio.h>
int main()
{
    int arr[5];
    int v;
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("%d is number", n);
    for (int i = 0; i < n; i++)
    {
        // printf("%d \n", arr[i]);
        printf("Enter the value for array %d \n", i);
        scanf("%d", &v);
        arr[i] = v;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d \n", arr[i]);
    }
    return 0;
}
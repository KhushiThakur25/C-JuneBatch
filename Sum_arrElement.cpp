#include <stdio.h>

void calSum(int *arr, int size, int *sum, float *avg)
{
    *sum = 0;
    for (int i = 0; i < size; i++)
    {
        *sum += arr[i];
    }
    *avg = (float)*sum / size;
}
int main()
{
    int arr[] = {10, 20, 30, 40};
    int sum;
    float avg;
    calSum(arr, 4, &sum, &avg);
    printf("sum is %d\n", sum);
    printf("Avg is %.2f\n", avg);
    return 0;
}
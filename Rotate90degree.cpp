#include <stdio.h>
int main()
{
    int N = 3;
    int arr[N][N] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    printf("Original array:\n");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    //Transpose array
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    // reverse row
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N / 2; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[i][N - j - 1];
            arr[i][N - j - 1] = temp;
        }
    }

    printf("\nRotate 90 degree array:\n");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
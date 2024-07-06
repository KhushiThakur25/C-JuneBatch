#include <stdio.h>

int main()
{
    int arr[] = {100, 92, 83, 144, 115};
    int max = arr[0];
    int secondMax = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (max < arr[i])
        {
            secondMax = max;
            max = arr[i];
        }
        if ((secondMax < arr[i]) && max != arr[i])
        {
            secondMax = arr[i];
        }
    }
    printf("Second Maximum value is %d ", secondMax);
    return 0;
}

// 1.Find minimum in an array..
// 2.Find span of an array..span = (max - min)
// 3.sum of all elements in an array..
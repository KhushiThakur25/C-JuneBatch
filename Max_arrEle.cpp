#include<stdio.h>
int main(){
    int arr[5] = {3,21,6,1,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max = arr[0];
    for(int i=1;i < n;i++){
        if (max < arr[i]){
            max = arr[i];
        }
    }
    printf("%d is the max value...",max);
    return 0;
}
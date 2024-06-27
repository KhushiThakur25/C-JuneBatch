#include<stdio.h>
#include<conio.h>

int main(){
	int n;
	printf("Enter the value for writing a table: \n");
	scanf("%d",&n);
//	for(int i = 1;i <= 10;i++){
//		printf("%d x %d = %d\n",n,i,n*i);
//	}
//	for(int i=0;i < n;i++){
//		printf("*");
//	}
	int i = 1;
	while (i <= 10){
		printf("%d x %d = %d\n",n,i,n*i);
		i++;
	}
	return 0;
}

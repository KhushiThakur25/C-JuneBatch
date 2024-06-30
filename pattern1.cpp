#include<stdio.h>
#include<conio.h>
int main(){
	int count = 0;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			count += 1;
			printf("* ");
		}
		printf("\n");
	}
		printf("Count is %d",count);
	return 0;
}

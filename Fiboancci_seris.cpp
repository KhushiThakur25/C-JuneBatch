#include<stdio.h>
#include<conio.h>

int main(){
	int first = 0,second = 1,third = 0;
	printf("%d %d ",first,second);
	for(int i = 1;i < 7;i++){
		third = first + second;
		printf("%d ",third);
		first = second;
		second = third;
	}
	return 0;
}

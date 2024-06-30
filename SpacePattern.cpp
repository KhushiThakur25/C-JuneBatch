#include<stdio.h>
#include<conio.h>
int main(){

	for(int i=0;i<5;i++){
		//space
		for(int j=0;j<5-1-i;j++){
			printf("  ");
		}
		//star
		for(int j=5-1-i;j<5;j++){
			printf("* ");
		}
		printf("\n");
	}	
	return 0;
}

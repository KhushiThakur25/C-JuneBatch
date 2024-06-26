#include<stdio.h>
#include<conio.h>
int main(){
	int a=63,b=52,c=30;
	int n1=7,n2=11,number;
	// in two variable
	if(a>b){
		printf("a is greater..\n");
	}else{
		printf("b is greater..\n");
	}
	
	//three variable
	if(a > b && a > c){
		printf("a is greatest..\n");
	}
	else if(b > a && b > c){
		printf("b is greatest..\n");
	}
	else{
		printf("c is greatest..\n");
	}
	printf("Enter the value for x:\n");
	scanf("%d",&number);
	
	if(number % 7 == 0 && number % 11 == 0){
		printf("x is a lucky number..");
	}
	else{
		printf("x is not a lucky number..");
	}
	
	getch();
	}

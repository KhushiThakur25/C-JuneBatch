#include<stdio.h>
#include<conio.h>
int main(){
	int p,c,m,b,i;
	float marks;
	printf("Enter the marks for physics\n");
	scanf("%d",&p);
	printf("Enter the marks for chemistry\n");
	scanf("%d",&c);
	printf("Enter the marks for maths\n");
	scanf("%d",&m);
	printf("Enter the marks for biology\n");
	scanf("%d",&b);
	printf("Enter the marks for computer\n");
	scanf("%d",&i);
	marks  = (p + c + m + b + i)/5;
	printf("%f\n",marks);
	if(marks >= 90){
		printf("Your grade is A");
	}
	else if(marks >= 80 && marks < 90){
		printf("Your grade is B");
	}
	else if(marks >= 70 && marks < 80){
		printf("Your grade is C");
	}
	else if(marks >= 50 && marks < 70){
		printf("Your grade is D");
	}
	else{
		printf("You are Fail..");
	}
	
	getch();
}

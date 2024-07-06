#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
	int n = 143;
	int sum=0,count=0,org = n;
	while (n>0){
		count += 1;
		n/=10;
	}
	printf("%d\n",count);
	n = org;
	while (n > 0){
		sum += pow(n%10,count);
		n/=10;
	}
	if(sum == org){
		printf("%d is an Armstrong Number",org);
	}
	else{
		printf("%d is not an Armstrong Number",org);
	}
	return 0;
}

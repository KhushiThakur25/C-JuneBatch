#include<stdio.h>

int main(){
    int age;
    char g, c;
    
    printf("Enter person's age: ");
    scanf("%d", &age);
    
    printf("Enter person's gender (m/f): ");
    scanf(" %c", &g); // Note the space before %c
    
    printf("Enter person's city (m/n): ");
    scanf(" %c", &c); // Note the space before %c
    
    if(age >= 25 && age <= 35 && g == 'm' && c == 'm'){
        printf("The premium is 6%%\n");
    }
    else if(age >= 25 && age <= 40 && g == 'm' && c == 'n'){
        printf("The premium is 4%%\n");
    }
    else if(age >= 25 && age <= 42 && g == 'f' && c == 'm'){
        printf("The premium is 3%%\n");
    }
    else if(age >= 25 && age <= 45 && g == 'f' && c == 'n'){
        printf("The premium is 2%%\n");
    }
    else{
        printf("NOT INSURED\n");
    }
    
    return 0;
}

#include <stdio.h>
int main(){
    int age, salary;
    printf("Please enter your age\n");
    scanf("%d", &age);
    printf("Enter your annual income\n");
    scanf("%d", &salary);
    
    if(age>=21 && salary>=21000){
        printf("Congratulations, you qualify for the loan\n");
    }
    else{
        printf("Unfortunately, we are unable to offer you a loan at the moment/n");
    }

    return 0;
}
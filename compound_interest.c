#include <stdio.h>
#include <math.h>

int main(){
    int principle; 
    float rate; 
    float time; 
    float compound_interest;
    float amount;
    
    printf("Enter principle\n");
    scanf("%d", &principle);
    printf("Enter rate\n");
    scanf("%f", &rate);
    printf("Enter time\n");
    scanf("%f", &time);

    rate = rate/100;
    time = time/12;
    amount = principle * pow(1 + rate, time);
    compound_interest = amount - principle;

    printf("Compound Interest = %.2f", compound_interest);
    
    return 0;

}
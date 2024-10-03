#include <stdio.h>
int main(){
    int principle; 
    float rate; 
    float time; 

    printf("Enter principle\n");
    scanf("%d", &principle);
    printf("Enter rate\n");
    scanf("%f", &rate);
    printf("Enter time\n");
    scanf("%f", &time);

    rate = rate/100;
    float simple_int = principle*rate*time;

    printf("%.2f", simple_int);
    return 0;

}
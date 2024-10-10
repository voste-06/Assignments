#include <stdio.h>
int main(){
    int id, units;
    char c_name[30];
    float charges, bill;

    printf("Enter Customer ID: ");
    scanf("%d", &id);
    printf("Enter Customer Name: ");
    scanf("%s", c_name);
    printf("Enter number of units: ");
    scanf("%d", &units);

    if(units <= 199){
        charges = 1.20;
    }
    else if(units>=200 && units<400){
        charges = 1.50;
    }
    else if(units>=400 && units<600){
        charges = 1.80;
    }
    else if(units>=600){
        charges = 2.00;
    }

    bill = charges * units;

    if(bill<100){
        bill = 100;
    }
    else if(bill>400){
        bill = bill*1.15;
    }

    printf("Customer ID: %d\n", id);
    printf("Customer Name: %s\n", c_name);
    printf("Number of units: %d\n", units);
    printf("Charges: %.2f\n", charges);
    printf("Bill: %.2f\n", bill);
    

    return 0;
}
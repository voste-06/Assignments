#include <stdio.h>
int main(){
    int book_id, due_date, return_date;
    int overdue,rate, amount;
    printf("Enter the Book ID\n");
    scanf("%d", &book_id);
    printf("Enter the due date\n");
    scanf("%d", &due_date);
    printf("Enter the return date\n");
    scanf("%d", &return_date);
    
    overdue = return_date-due_date;
    if(overdue<=7){
        rate = 20;
    }
    else if(overdue>7 && overdue<=14){
        rate = 50;
    }
    else{
        rate = 100;
    }

    amount = rate*overdue;
    printf("Book ID: %d\n", book_id);
    printf("Due Date: %d\n", due_date);
    printf("Return Date: %d\n", return_date);
    printf("Days Overdue: %d\n", overdue);
    printf("Rate: %d\n", rate);
    printf("Amount: %d\n", amount);
    
    return 0;
}
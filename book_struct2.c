#include <stdio.h>
#include <string.h>

struct book_struct{
    char title[30];
    char author[30];
    int pub_year;
    char isbn[13];
    float price;
};

int main(){
    struct book_struct book1;
    printf("Enter Tittle: ");
    scanf("%s", &book1.title);
    printf("Author: ");
    scanf("%s", &book1.author);
    printf("Enter Publication Year: ");
    scanf("%d", &book1.pub_year);
    printf("Enter ISBN: ");
    scanf("%s", book1.isbn);
    printf("Enter price: ");
    scanf("%f", &book1.price);

    printf("\nTittle: %s\n", book1.title);
    printf("Author: %s\n", book1.author);
    printf("Publication Year: %d\n", book1.pub_year);
    printf("ISBN: %s\n", book1.isbn);
    printf("Price: %.2f\n", book1.price);
}

#include <stdio.h>
#include <string.h>

struct book{
    char title[30];
    char author[30];
    int pub_year;
    char isbn[13];
    float price;
    
};//book_struct;

int main(){
    struct book structure1;
    strcpy(structure1.title, "Introduction to C Programming");
    strcpy(structure1.author, "John Smith");
    structure1.pub_year = 2022;
    strcpy(structure1.isbn, "9780131103627");
    structure1.price = 49.99;

    printf("Tittle: %s\n", structure1.title);
    printf("Author: %s\n", structure1.author);
    printf("Publication Year: %d\n", structure1.pub_year);
    printf("ISBN: %s\n", structure1.isbn);
    printf("Price: %.2f\n", structure1.price);

}

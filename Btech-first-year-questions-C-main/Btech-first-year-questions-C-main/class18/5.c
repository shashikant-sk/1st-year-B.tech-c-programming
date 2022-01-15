//Q5 - WAP to store n books data such as title, author, pulication, price etc using structures with
#include <stdio.h>
struct book
{
    char title[50];
    char author[50];
    char pub[50];
    float price;
};

int main() 
{
    int size=0;
    printf("Enter number of books: ");
    scanf("%d",&size);
    struct book s[size];
    
    for(int i=0;i<size;i++)
    {
        printf("Enter information:\n");
        fflush(stdin);
        printf("Enter title: ");
        gets(s[i].title);
        fflush(stdin);
        printf("Enter author: ");
        gets(s[i].author);
        fflush(stdin);
        printf("Enter publication: ");
        gets(s[i].pub);
        fflush(stdin);
        printf("Enter price: ");
        scanf("%f",&s[i].price);
    }

    for(int i=0;i<size;i++)
    {
        printf("\nDisplaying Information:\n");
        printf("\nTitle: ");
        printf("%s", s[i].title);
        printf("\nAuthor: ");
        printf("%s", s[i].author);
        printf("\nPublication: ");
        printf("%s", s[i].pub);
        printf("\nPrice: ");
        printf("%.2f",s[i].price);
    }
    return 0;
}
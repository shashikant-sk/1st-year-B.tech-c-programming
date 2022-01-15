//Q6 - WAP to read item details used in party and calculate all expenses, divide expenses in all friends equally.
#include<stdio.h>

struct party
{
    float exp;
    int peeps;
}p;

int main()
{
    printf("Enter the total expenses: ");
    scanf("%f",&p.exp);
    printf("Enter number of people: ");
    scanf("%d",&p.peeps);
    printf("Expense per head = %.2f",(p.exp/p.peeps));
    return 0;
}
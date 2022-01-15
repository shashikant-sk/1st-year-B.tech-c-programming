#include<stdio.h>

int main()
{
    // Q6. Write a menu driven program with the following options:
    // · To find odd-even number
    // · To find numbers are positive or negative

    int num=0,option=0;
    printf("Enter a number : ");
    scanf("%d",&num);
    printf("Select one among the following: \n");
    printf("1) To fing odd/even \n");
    printf("2) To find if number is positive/negative: \n");
    scanf("%d",&option);
    if(option == 1)
    {
        if(num%2)printf("%d is odd.",num);
        else printf("%d is even.",num);
    }
    else if(option == 2)
    {
        if(num>=0)printf("%d is positive.",num);
        else printf("%d is negative.",num);
    }
    else printf("Kripiya kar ke sahi option pe dabayein :pray: :)");
    return 0;
}   
#include<stdio.h>
int main()
{
    //Q3WAP to determine whether a year entered through the keyboard is a leap year or not.
    int year;
    printf("Enter year: ");
    scanf("%d",&year);
    if (year % 400 == 0)printf("%d is a leap year.", year);
    else if (year % 100 == 0)printf("%d is not a leap year.", year);
    else if (year % 4 == 0)printf("%d is a leap year.", year);
    else printf("%d is not a leap year.", year);
    return 0;
}
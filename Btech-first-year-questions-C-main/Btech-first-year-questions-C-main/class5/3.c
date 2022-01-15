#include<stdio.h>
int main()
{
    //Q3WAP to determine whether a year entered through the keyboard is a leap year or not.
    int a;
    printf("Enter year: ");
    scanf("%d",&a);
    printf("%s",((a%4==0)?"Leap Year":"Not Leap Year"));
    return 0;
}
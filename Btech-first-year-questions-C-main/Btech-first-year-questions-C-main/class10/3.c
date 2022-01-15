#include<stdio.h>

int main()
{
    //Q3.Write a program in C to display the multiplication table of a given integer.
    int n=0;
    printf("Enter the number to display multiplication table: ");
    scanf("%d",&n);
    for(int i=1;i<=10;i++)
    {
        printf("%d * %d = %d \n",n,i,n*i);
    }
    return 0;
}
#include<stdio.h>

int main()
{
    // Q2.WAP to print the following pattern for n rows.
    // * 
    // * * 
    // * * * 
    // * * * * 
    // * * * * * 
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)printf("*  ");
        printf("\n");
    }
    return 0;
}
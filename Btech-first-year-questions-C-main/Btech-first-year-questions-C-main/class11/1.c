#include<stdio.h>

int main()
{
    // Q1.WAP to print the following pattern for n rows. 
    // 1 
    // 1 2 
    // 1 2 3 
    // 1 2 3 4 
    // 1 2 3 4 5 
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)printf("%d  ",j);
        printf("\n");
    }
    return 0;
}
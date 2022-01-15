#include<stdio.h>

int main()
{
    // Q4.WAP to print the following pattern for n rows. 
    // A 
    // A B 
    // A B C 
    // A B C D 
    // A B C D E 

    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)printf("%c  ",(char)64+j);
        printf("\n");
    }
    return 0;
}
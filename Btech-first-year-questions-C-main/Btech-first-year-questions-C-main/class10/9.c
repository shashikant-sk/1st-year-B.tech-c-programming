#include<stdio.h>

int main()
{
    //Q9.Write a C program to find HCF (Highest Common Factor) of two numbers.
    int a=0,b=0,hcf;
    printf("Enter 2 numbers to find HCF: ");
    scanf("%d %d",&a,&b);
    for(int i = 1; i <= a || i <= b; i++) 
        if( a%i == 0 && b%i == 0 )hcf = i;
    printf("HCF = %d", hcf);
    return 0;
}
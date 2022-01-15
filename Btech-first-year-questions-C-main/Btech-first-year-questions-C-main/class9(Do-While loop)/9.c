#include<stdio.h>

int main()
{
    //Q9.WAP input a no find out reverse of that no.
    int a=0,rev=0;
    printf("Enter a number: ");
    scanf("%d",&a);
    do
    {
        rev = (rev*10)+(a%10);
        a/=10;
    }while(a!=0);
    printf("The reversed number = %d",rev);
    return 0;
}
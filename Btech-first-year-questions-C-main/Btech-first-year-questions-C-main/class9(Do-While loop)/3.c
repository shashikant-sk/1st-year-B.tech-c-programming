#include<stdio.h>

int main()
{
    //Q3.WAP to print all numbers within a given range. The range is given by user.   
    int a=0,b=0;
    printf("Enter range: ");
    scanf("%d %d",&a,&b);
    do
    {
        printf("%d \n",a);
        a++;
    }while(a<=b);
    return 0;
}
#include<stdio.h>

int main()
{
    //Q4.WAP to print all odd numbers from a range.   
    int a=0,b=0;
    printf("Enter range: ");
    scanf("%d %d",&a,&b);
    for(;a<=b;a++)
        if(a%2)
            printf("%d \n",a);
    return 0;
}
#include<stdio.h>

int main()
{
    //Q5.WAP to add all even numbers  from a given range.  
    int a=0,b=0;
    printf("Enter range: ");
    scanf("%d %d",&a,&b);
    do
    {
        if(a%2==0)printf("%d \n",a);
        a++;
    }while(a<=b);
    return 0;
}
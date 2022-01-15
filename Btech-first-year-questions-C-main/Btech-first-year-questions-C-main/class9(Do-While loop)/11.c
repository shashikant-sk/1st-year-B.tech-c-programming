#include<stdio.h>
#include<math.h>

int main()
{
    //Q11.WAP input a no and check whether that no is prime or not?
    int a=0,flag=0,i=2;
    printf("Enter a number: ");
    scanf("%d",&a);
    do
    {
        if(a==2)break;
        if(a%i==0)flag=1;
        i++;
    }while(i<sqrt(a));
    if(flag)printf("Not prime");
    else printf("Prime");
    return 0;
}
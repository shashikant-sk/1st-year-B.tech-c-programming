#include<stdio.h>
#include<math.h>

int main()
{
    //Q11.WAP input a no and check whether that no is prime or not?
    int a=0,flag=0;
    printf("Enter a number: ");
    scanf("%d",&a);
    for(int i=2;i<sqrt(a);i++)if(a%i==0)flag=1;
    if(flag)printf("Not prime");
    else printf("Prime");
    return 0;
}
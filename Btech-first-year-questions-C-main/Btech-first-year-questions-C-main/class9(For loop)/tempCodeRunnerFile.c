#include<stdio.h>
#include<math.h>

int main()
{
    //Q14.WAP input a no and check whether that no is strong or not?
    int num=0,sum=0,dig=0;
    printf("Enter a number to check for strong number: ");
    scanf("%d",&num);
    int temp = num;
    for(;temp!=0;temp/=10)
    {
        int r=temp%10,fact=1;
        for(int i=1;i<=r;i++)fact *= i;
        sum += fact;
    }
    if(sum==num)printf("Strong");
    else printf("Not strong.");
    return 0;
}
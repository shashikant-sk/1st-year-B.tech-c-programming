#include<stdio.h>
#include<math.h>

int main()
{
    //Q14.WAP input a no and check whether that no is strong or not?
    int num=0,sum=0,dig=0;
    printf("Enter a number to check for strong number: ");
    scanf("%d",&num);
    int temp = num;
    do
    {
        int r=temp%10,fact=1;
        for(int i=1;i<=r;i++)fact *= i;
        sum += fact;
        temp /= 10;
    }while(temp!=0);
    if(sum==num)printf("Strong");
    else printf("Not strong.");
    return 0;
}
#include<stdio.h>

int main()
{
    //Q12.WAP input a no and check whether that no is perfect or not
    int n=0,i=1;
    printf("Enter a number to check for perfectness: ");
    scanf("%d",&n);
    int sum = 0;
    do
    {
        if(n%i==0)sum+=i;
        i++;
    }while(i<n);
    if (sum == n && n != 1)printf("Perfect.");
    else printf("Not perfect.");
    return 0;
}
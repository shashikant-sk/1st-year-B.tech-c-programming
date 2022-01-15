#include<stdio.h>

int main()
{
    int n=0,i=1;
    printf("Enter a number to check for perfectness: ");
    scanf("%d",&n);
    int sum = 0;
    while(i<n)
    {
        if(n%i==0)sum+=i;
        i++;
    }
    if (sum == n && n != 1)printf("Perfect.");
    else printf("Not perfect.");
    return 0;
}
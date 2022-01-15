#include<stdio.h>
int main()
{
int i,n;
    printf("Enter the No : ");
    scanf("%d",&n);
    for(int i=2;i<=n;i++)
    if(n%i==0)
    break;
    if(i==n)
    printf("%d prime no",n);
    else
    printf("%d not a prime",n);
return 0;
}


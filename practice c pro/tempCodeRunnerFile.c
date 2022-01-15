#include<stdio.h>
#include<stdlib.h>

long fac(long n) {
    if(n<=1)
    return 1;
    return n*fac(n-1);
}

int main {
    int a,sum=0;
    printf("Enter the number for :=");
    scanf("%d",&a);
    for(long i=1;i<=a-1;i++)
    printf("%d!/%d +", i,i);
    printf("%d!/%d =",a,a); 
    for(long i=1;i<=a-1;i++)
    printf("%d +",i,i);
}
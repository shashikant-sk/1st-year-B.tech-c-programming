// 5)WAP to find out fibonacci series sequence of a number using user-defined function
#include<stdio.h>

void fib(int);
void fib(int a)
{
    int n1=0,n2=1;
    printf("%d %d ",n1,n2);
    a-=3;
    while(a>=0)
    {
        int temp=n2;
        n2 += n1;
        n1 = temp;
        printf("%d ",n2);
        a--;
    }
}

int main()
{  
    int a=0;
    printf("Enter a number to find fibonacci: ");
    scanf("%d",&a);
    printf("First %d numbers of fibonacci series: ",a);
    fib(a);
    return 0;
}
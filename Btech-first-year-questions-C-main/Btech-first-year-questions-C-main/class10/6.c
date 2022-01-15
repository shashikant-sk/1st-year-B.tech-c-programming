#include<stdio.h>

int main()
{
    //Q6.Write a program in C to display the first n terms of Fibonacci series.
    int n=0,prev=0,next=1;
    printf("Enter n: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("%d \t",prev);
        int temp = prev+next;
        prev = next;
        next = temp;
    }

    return 0;
}
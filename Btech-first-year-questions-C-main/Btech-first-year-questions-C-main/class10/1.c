#include<stdio.h>

int main()
{
    //Q1.Write a program in C to read 10 numbers from keyboard and find their sum and average
    int n;
    float sum=0;
    printf("Enter the numbers: ");
    for(int i=1;i<=10;i++)
    {
        scanf("%d",&n);
        sum+=n;
    }
    printf("Sum = %.2f \n",sum);
    printf("Average = %.2f",sum/10);
    return 0;
}
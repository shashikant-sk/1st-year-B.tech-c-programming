#include<stdio.h>

int main()
{
    //Q8.Write a program in C to find the number and sum of all integer between 
    //100 and 200 which are divisible by 9.
    int sum=0;
    for(int i=100;i<=200;i++)
        if(i%9==0)printf("%d \n",i),sum+=i;
    printf("Sum = %d",sum);
    return 0;
}
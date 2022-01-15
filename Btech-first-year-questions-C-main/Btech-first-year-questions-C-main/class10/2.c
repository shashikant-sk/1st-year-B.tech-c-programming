#include<stdio.h>

int main()
{
    //Q2.Write a program in C to display the cube of the numbers upto a given integer
    int a,b;
    printf("Enter the range: ");
    scanf("%d %d",&a,&b);
    for(int i=a;i<=b;i++)
        printf("%d ^ 3 = %d \n",i,i*i*i);
    return 0;
}
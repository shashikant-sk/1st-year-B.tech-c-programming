#include<stdio.h>

int main()
{
    //Q3.WAP to print all numbers within a given range. The range is given by user. 
    int a=0,b=0;
    printf("Give range: ");
    scanf("%d %d",&a,&b);
    while(a<=b)
    {
        printf("%d \n",a);
        a++;
    }
    return 0;
}
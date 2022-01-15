#include<stdio.h>

int main()
{
    //Q5.WAP to add all even numbers  from a given range.
    int a=0,b=0;
    printf("Give range: ");
    scanf("%d %d",&a,&b);
    while(a<=b)
    {
        if(a%2==0)printf("%d \n",a);
        a++;
    }
    return 0;
}
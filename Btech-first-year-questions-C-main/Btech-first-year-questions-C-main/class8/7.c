#include<stdio.h>

int main()
{
    //Q7.WAP input a no and count how many digit present in that no.
    int a=0,dig=0;
    printf("Enter a number: ");
    scanf("%d",&a);
    while(a>0)
    {
        dig++;
        a /= 10;
    }
    printf("The number of digits = %d",dig);
    return 0;
}
#include<stdio.h>

int main()
{
    //Q7.WAP input a no and count how many digit present in that no.
    int a=0,dig=0;
    printf("Enter a number: ");
    scanf("%d",&a);
    for(;a!=0;a/=10)dig++;
    printf("Number of digits = %d",dig);
    return 0;
}
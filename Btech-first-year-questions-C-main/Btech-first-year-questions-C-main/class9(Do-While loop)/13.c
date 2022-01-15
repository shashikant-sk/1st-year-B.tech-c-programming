#include<stdio.h>
#include<math.h>

int main()
{
    //Q13.WAP input a no and check whether that no is amstrong or not?
    int num=0,sum=0,dig=0;
    printf("Enter a number to check for armstrong number: ");
    scanf("%d",&num);
    int n = num;
    for(;n!=0;n/=10)dig++;
    n = num;
    do
    {
        int r = n%10;
        sum += pow(r, dig);
        n/=10;
    }while(n!=0);
    if(sum==num)printf("Armstrong number.");
    else printf("Not armstrong number.");
    return 0;
}
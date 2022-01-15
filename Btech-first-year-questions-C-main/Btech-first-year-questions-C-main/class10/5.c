#include<stdio.h>
#include<math.h>

int main()
{
    //Q5.Write a C program to print all the Armstrong number for a given range.
    int a,b;
    printf("Enter the range to display armstrong numbers: ");
    scanf("%d %d",&a,&b);
    for(int i=a;i<=b;i++)
    {
        int sum=0,dig=0,n=i;
        for(;n!=0;n/=10)dig++;
        n = i;
        for(;n!=0;n/=10)
        {
            int r = n%10;
            sum += pow(r, dig);
        }
        if(sum==i)printf("%d \n",i);
    }
    return 0;
}

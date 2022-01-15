// https://technotip.com/6086/c-programming-beginner-to-advance-to-expert/


#include<stdio.h>
int main()
{
    int N,a=-1,b=1,c;
    printf("\n-------------------------------------------\n:");
    printf("\nEnter the number of term : ");
    scanf("%d",&N);
   // for (int i=1;i<=N;i++)
   // {
        c = a + b;
        while (c<=N)
        {
        
        printf("%d  ",  c);
        a = b;
        b = c;
        c=a+b;
    }
    return 0;

}
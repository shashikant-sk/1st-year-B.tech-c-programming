#include <stdio.h>

int check(int a, int b)
{
for(int i=a;i<=b;i++)
{
if(i%10==3||i%10==9)
{
printf("%d  ",i);
}
}

    return 0;
} 

int main()
{
    int x=20051939%10+2;
    int y=20051939%10+35;
    
    int c;
    
    c=check(x,y);
    
    return 0;
}
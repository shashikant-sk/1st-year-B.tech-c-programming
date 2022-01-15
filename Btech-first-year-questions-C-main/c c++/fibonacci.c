#include<stdio.h>
int main()
{
/*
    int i,t1=0,t2=1,n;
    int nextterm = t1+ t2;
    printf("Enter the number :");

    scanf("%d",&n);
    printf("fibonacci series %d  %d",  t1,  t2);

    for(i=1;i<=n;i++)
    {
        printf("%d  ",  nextterm);
        t1 = t2;
        t2 = nextterm;
        nextterm = t1 + t2;
        
    }
    return 0;
}*/ 
int n,a=-1,b=1,c;
printf("Enter the number of term :");
scanf("%d", &n);
c=a+b;
while (c<=n)
{

    printf(" %d",  c);
    a = b;
    b = c;
    c = a + b;

    /* code */
}
return 0;
}

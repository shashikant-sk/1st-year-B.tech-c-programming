#include<stdio.h>
int main()
{
    int a,b,swp;
    printf("\nEntee the two number of a and b  :");
    scanf("%d%d",&a,&b);
    printf("\nbefore the swapping the value is a = %d , b = %d\n",a , b);
    swp=a;
    a=b;
    b=swp;
    printf("\nAfter swapping value is a = %d, b = %d\n",a , b);
    return 0;

}
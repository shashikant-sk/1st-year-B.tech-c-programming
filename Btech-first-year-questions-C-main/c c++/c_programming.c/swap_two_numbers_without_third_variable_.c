#include<stdio.h>
int main()
{
    int a,b;
    printf("\n Enter the value of a and b :");
    scanf("%d%d",&a,&b);
    printf("Before swapping the value of is a = %d and b = %d",a,b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf("\n After swapping the value is a = %d and b = %d", a , b);
    return 0;

}
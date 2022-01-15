#include <stdio.h>

int main()
{
    int number,reverse=0,rem;
    printf("Enter the number :");
   scanf("%d",&number);
   while(number!=0)
   {
       reverse=number%10;
       rem=rem*10+reverse;
       number=number/10;
       
   }
   printf("reverse is: %d",rem);
    return 0;
}
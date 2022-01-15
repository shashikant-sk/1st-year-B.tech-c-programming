#include<stdio.h>
int main()
{
    int choice,a,b,c,d;
    while (1)
    {
    printf("\n-------menu-----------\n");
    printf("\n 1. Addition");
    printf("\n 2. EVEN-odd ");
    printf("\n 3. printing n number");
    printf("\n 4. EXIT");
     
    printf("\n Enter your choice between 1,2,3 :==") ;
    scanf("%d",&choice);

   switch(choice)
   {
   case 1:
       printf("\n Enter the two number :=");
       scanf("%d%d",&a,&b);
       c=a+b;
       printf("sum id %d",c);
       break;

  case 2:
        
        printf("\n Enter your number :=");
        scanf("%d",&a);
        if(a%2==0)
        printf("its a Even-number");
        else
        printf("its a Odd-number");
       break ;

  case 3:

       printf("\n Enter your n number :=");
       scanf("%d",&a);
       for ( b = 1; b<=a; b++)
           printf("%d",b);
           
               break;
               
      case 4: exit(0);
     

   
   default:
       printf("------Invalid Inpu------ ");
   }}
return 0;
}
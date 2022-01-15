#include <stdio.h>
int main()
{ 
    int num; 
// take the number as an input from user 
printf("\n Enter the value of number whose multiplication table is to be printed \n :");
scanf("%d",&num);
for ( int i = 1; i <=10; i++)
{
    printf(" %d X %d = %d\n",num,i,i*num);
}
    return 0;
    /* code */
}


 
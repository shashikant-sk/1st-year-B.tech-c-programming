/* Conditional Operators Ternary
Condition ? doSomething if TRUE: doSomething if FALSE; */ 

#include<stdio.h>
int main ()
{
    int a,b,c, small;
    printf(" \n Enter a number a , b & c :");

    scanf("%d %d %d",&a,&b, &c);

    small = a<b<c? a:b<c ?b:c;
    printf("\n The smallest number is %d",small);
return 0;
}
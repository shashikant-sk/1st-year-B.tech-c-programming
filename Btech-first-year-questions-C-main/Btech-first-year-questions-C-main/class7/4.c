#include<stdio.h>

int main()
{
    //Q4. Write a menu driven program with the following options:
    //Addition
    //Multiplication
    //Subtraction
    //Division

    float a=0,b=0;
    char c = "";
    printf("Enter the expression(Ex: 2 + 3) and choose sign from -> (+,-,*,/) : ");
    scanf("%f %c %f",&a,&c,&b);
    if(c=='+')printf("%f + %f = %f",a,b,a+b);
    else if(c=='-')printf("%f - %f = %f",a,b,a-b);
    else if(c=='*')printf("%f * %f = %f",a,b,a*b);
    else if(c=='/')printf("%f / %f = %f",a,b,a/b);
    else printf("Enter valid expression.");
    return 0;
}
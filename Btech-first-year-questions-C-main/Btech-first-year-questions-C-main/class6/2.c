#include<stdio.h>

int main()
{
    //Q2.WAP which takes two integer operands and one operator form the user, performs the operation and then prints the result. 
    //(Consider the operators +,-,*, /, % etc). Use switch cse. 
    float a,b;
    char c;
    printf("Enter 2 numbers and sign between them(Ex: 2 + 3): ");
    scanf("%f %c %f",&a,&c,&b);
    if(c=='+')printf("%.0f + %.0f = %.0f",a,b,a+b);
    else if(c=='-')printf("%.0f - %.0f = %.0f",a,b,a-b);
    else if(c=='*')printf("%.0f * %.0f = %.0f",a,b,a*b);
    else if(c=='/')printf("%.0f / %.0f = %f",a,b,a/b);
    else if(c=='%')printf("%.0f %% %.0f = %d",a,b,(int)a%(int)b);
    else printf("Kya karwana chahte ho :)");
    return 0;
}
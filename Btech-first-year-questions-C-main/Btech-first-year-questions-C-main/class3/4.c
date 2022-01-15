#include<stdio.h>

int main()
{
    //Q.4 WAP to convert temperature from centigrade to Fahrenheit scale.
    float F=0,C=0;
    printf("Enter Centigrade temprature: ");
    scanf("%f",&C);
    F = ((9/5)*C)+32;
    printf("%.2f *C = %.2f *F",C,F);
    return 0;
}
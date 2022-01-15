#include<stdio.h>

int main()
{
    //Q.3 WAP to find centigrade for a given Fahrenheit temperature.
    float F=0,C=0;
    printf("Enter Farenhiet temprature: ");
    scanf("%f",&F);
    C = 5*((F-32)/9);
    printf("%.2f *F = %.2f *C",F,C);
    return 0;
}
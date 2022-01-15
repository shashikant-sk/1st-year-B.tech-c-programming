#include<stdio.h>

int main()
{
    //Q.8 WAP to calculate perimeter of a circle.
    float r=0,per=0;
    printf("Enter radius of circle: ");
    scanf("%f",&r);
    per = 3.141*r*2;
    printf("Area = %.3f",per);
    return 0;
}
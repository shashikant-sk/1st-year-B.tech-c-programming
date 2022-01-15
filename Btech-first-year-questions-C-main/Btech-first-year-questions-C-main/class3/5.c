#include<stdio.h>

int main()
{
    //Q.5 WAP to calculate area of a circle.
    float r=0,area=0;
    printf("Enter radius of circle: ");
    scanf("%f",&r);
    area = 3.141*r*r;
    printf("Area = %.3f",area);
    return 0;
}
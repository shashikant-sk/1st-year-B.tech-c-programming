#include<stdio.h>

int main()
{
    //Q.6 WAP to calculate area of a triangle whose base and height is given.
    float base=0,height=0,area=0;
    printf("Enter base of triangle: ");
    scanf("%f",&base);
    printf("Enter height of triangle: ");
    scanf("%f",&height);
    area = 0.5*height*base;
    printf("Area = %.3f",area);
    return 0;
}
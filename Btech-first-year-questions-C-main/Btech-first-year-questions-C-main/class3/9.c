#include<stdio.h>
#include<math.h>

int main()
{
    //Q.9 WAP to calculate area of a triangle whose three sides are given.
    float a=0,b=0,c=0,area=0,s=0;
    printf("Enter 3 sides of triangle: ");
    scanf("%f %f %f",&a,&b,&c);
    s=(a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area = %.3f",area);
    return 0;
}
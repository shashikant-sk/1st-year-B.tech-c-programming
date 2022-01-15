#include<stdio.h>
#include<math.h>

int main()
{
    //Q1.WAP to find the roots of a quadratic equation ax2+bx+c=0 using if-else statement.
    float a,b,c,root1,root2,D;
    printf("Provide a,b,c for the quadratic ax^2+bx+c=0 : ");
    scanf("%f %f %f",&a,&b,&c);
    D = (b*b)-(4*a*c);
    if(D>0)
    {
        root1 = (-b + sqrt(D))/(2*a);
        root2 = (-b - sqrt(D))/(2*a);
        printf("Root1 = %f, Root2 = %f\n",root1,root2);
    }
    else if(D==0)
    {
        root1 = root2 = (-b)/(2*a);
        printf("Root1 = %f, Root2 = %f\n",root1,root2);
    }
    else if(D<0)
    {
        printf("Root1 = %f + %f i , Root2 = %f - %f i",-b/(2*a),sqrt(-D)/(2*a),-b/(2*a),sqrt(-D)/(2*a));
    }
    return 0;
}
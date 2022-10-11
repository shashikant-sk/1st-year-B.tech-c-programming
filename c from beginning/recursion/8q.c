
// Write a function to find square root of a number using recursion.

#include <stdio.h>
#include <math.h>

float squareRoot(float n);
int main()
{
    float n;
    printf("Enter a number: ");
    scanf("%f", &n);
    printf("Square root of %0.2f = %.2f", n, squareRoot(n));
    return 0;
}
float squareRoot(float n)
{
    return sqrt(n);
}

























// #include<stdio.h>

// float squareroot(float sq ); 
//  int main() {
//     int n;
//     printf("Enter The number to find square root :" );
//     scanf("%d",&n);

//     printf("The square Root is : %d",squareroot(n));
//     return 0;
//  }
//   float squareroot(float n) {
     
//     return n * n;
//   }

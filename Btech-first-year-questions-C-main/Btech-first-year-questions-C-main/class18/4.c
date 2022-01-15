//Q4 - WAP to add two complex numbers by passing structure to a function 
#include <stdio.h>

struct complex {
   float real;
   float img;
} c1, c2, result;

int main() 
{
   printf("Enter 1st complex number\n");
   printf("Enter Real part: ");
   scanf("%f", &c1.real);
   printf("Enter complex part: ");
   scanf("%f", &c1.img);

   printf("Enter 2nd complex number\n");
   printf("Enter Real part: ");
   scanf("%f", &c2.real);
   printf("Enter complex part: ");
   scanf("%f", &c2.img);
   
   result.real = c1.real+c2.real;
   result.img = c1.img+c2.img;
   
   printf("\nSum of complex numbers = %.2f + %.2f i.", result.real, result.img);

   return 0;
}
//Q3 - WAP to add two distances (in inch-feet) using structures.
#include <stdio.h>

struct Distance {
   int feet;
   int inch;
} d1, d2, result;

int main() 
{
   printf("Enter 1st distance\n");
   printf("Enter feet: ");
   scanf("%d", &d1.feet);
   printf("Enter inch: ");
   scanf("%d", &d1.inch);

   printf("\nEnter 2nd distance\n");
   printf("Enter feet: ");
   scanf("%d", &d2.feet);
   printf("Enter inch: ");
   scanf("%d", &d2.inch);
   
   result.feet = d1.feet + d2.feet + (d1.inch + d2.inch)/12;
   result.inch = (d1.inch + d2.inch)%12;

   printf("\nSum of distances = %d feet and %d inches.", result.feet, result.inch);

   return 0;
}
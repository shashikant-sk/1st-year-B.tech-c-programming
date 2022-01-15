//Q2 - WAP to add two distances (in km-meter) using structures.
#include <stdio.h>

struct Distance {
   int km;
   int meter;
} d1, d2, result;

int main() 
{
   printf("Enter 1st distance\n");
   printf("Enter km: ");
   scanf("%d", &d1.km);
   printf("Enter meter: ");
   scanf("%d", &d1.meter);

   printf("\nEnter 2nd distance\n");
   printf("Enter km: ");
   scanf("%d", &d2.km);
   printf("Enter meter: ");
   scanf("%d", &d2.meter);
   
   result.km = d1.km + d2.km + (d1.meter + d2.meter)/1000;
   result.meter = (d1.meter + d2.meter)%1000;

   printf("\nSum of distances = %d Km and %d meter.", result.km, result.meter);

   return 0;
}

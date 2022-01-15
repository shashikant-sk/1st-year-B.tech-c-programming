//Q3 - WAP to add two times (in hr-min-sec) by passing structure to a function.
#include<stdio.h>

struct Time 
{
   int hr;
   int min;
   int sec;
} s1, s2, result;

int main() 
{
   printf("Enter 1st Time\n");
   printf("Enter Hour: ");
   scanf("%d", &s1.hr);
   printf("Enter minutes: ");
   scanf("%d", &s1.min);
   printf("Enter seconds: ");
   scanf("%d", &s1.sec);

   printf("\nEnter 2nd Time\n");
   printf("Enter Hour: ");
   scanf("%d", &s2.hr);
   printf("Enter minutes: ");
   scanf("%d", &s2.min);
   printf("Enter seconds: ");
   scanf("%d", &s2.sec);
   
   result.sec = (s1.sec+s2.sec)%60;
   result.min = (s1.min+s2.min)%60 + (s1.sec+s2.sec)/60;
   result.hr = s1.hr + s2.hr + (s1.min + s2.min + (s1.sec+s2.sec)/60)/60;

   printf("\nSum of Time = %d:%d:%d", result.hr, result.min, result.sec);

   return 0;
}
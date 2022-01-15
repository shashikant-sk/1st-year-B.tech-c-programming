#include <stdio.h>
  
int main() 
{ 
    //Q3.WAP to find the average mark of 5 subjects of a student and find the average mark.
    float a,b,c,d,e;
    printf("Enter marks in 5 subjects: ");
    scanf("%f %f %f %f %f",&a,&b,&c,&d,&e); 
    printf("percentage = %.2f" ,(a+b+c+d+e)/5);   
    return 0; 
} 
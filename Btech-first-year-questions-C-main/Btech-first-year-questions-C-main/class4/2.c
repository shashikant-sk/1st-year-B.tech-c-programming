#include <stdio.h>
#include<math.h> 
  
int main() 
{ 
    //Q2.WAP to input principal,time,rate of interest and find out compound  interest .
    float p,t,r;
    printf("Enter principal,rate,time period: ");
    scanf("%f %f %f",&p,&t,&r);
    float CI = p * (pow((1 + r/ 100), t)); 
    printf("Compounded Amount = %f" ,CI);   
    return 0; 
} 
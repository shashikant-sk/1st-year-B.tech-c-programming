#include<stdio.h>

int sum(int a, int b);  // function declaration or prototype 

 int main() {

     int a,b;

     printf("Enter Your Firts number :");
     scanf("%d",&a);
     printf("Enter your Second number :");
     scanf("%d",&b);

     int s = sum (a,b);   // function call 
     printf(" sum is %d", s);

     return 0;

 }

 int sum (int a , int b){  // function difinition
    return a + b ;
 }
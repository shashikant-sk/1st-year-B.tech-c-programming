#include<stdio.h>
void hello();  //declaration // or prototype
void goodbye();
 
 int main (){
    hello();  // function call
    goodbye();

    return 0;
 }

 void hello(){  // function definition
    printf("Hello\n");

 }

 void goodbye() {
    printf("goodbye");
 }
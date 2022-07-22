#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(int argc, char * argv[])
{
if(argc==1){
printf("No command line argument present, add them first");
return 0;
}

double firstNumber, secondNumber, temporaryVariable;
 firstNumber = atoi(argv[1]);

 secondNumber = atoi(argv[2]);

 temporaryVariable = firstNumber;

 firstNumber = secondNumber;

 secondNumber = temporaryVariable;

 printf("\nAfter swapping, firstNumber = %.2lf\n", firstNumber);

 printf("After swapping, secondNumber = %.2lf", secondNumber);

return 0;
}
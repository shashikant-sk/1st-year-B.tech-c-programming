// Print 1(true) or 0(false) for the following statements:

// c.) if a number is greater than 9 & less than 100 -> TRUE 
// (2 digit number) 

#include<stdio.h>
int main () {
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    printf("%d \n", x > 9 && x < 100);
    return 0;
}
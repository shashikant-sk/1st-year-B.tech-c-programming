/*
b. Write a program to check if the given number is a
natural number.
(Natural numbers start from 1)
*/
#include<stdio.h>
int main() {
    int a;
    printf("Enter a number to check if its natural Number  or not: ");
    scanf("%d",&a);
    if(a<=1 && a<=9){
        printf("%d is a natural number",a);
    }
    else {
        printf("%d is not a natural number",a);
    }
    return 0;
}
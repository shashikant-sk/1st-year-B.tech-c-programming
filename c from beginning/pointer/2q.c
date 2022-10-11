#include<stdio.h>
int main() {
    int *ptr;
    int x;

    ptr = &x;
    *ptr = 0;

    printf(" x = %d\n",x);
    printf("*ptr = %d\n",*ptr);
printf("\n-----------------------------\n");
    *ptr +=5;

    printf(" x = %d\n",x);
    printf("*ptr = %d\n", *ptr);
  printf("\n-----------------------------\n");

    (*ptr)++;

    printf(" X = %d\n",x);
    printf("*ptr = %d\n",*ptr);
  printf("\n-----------------------------\n");
    return 0; 
 



}
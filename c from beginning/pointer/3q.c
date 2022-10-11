// swap

#include<stdio.h>
 void swap(int a , int b);
 void _swap(int *a, int *b);

 int main() {
    int x = 3, y= 5;
    _swap(&x, &y);
   // swap(x,y);
    printf("x = %d, y = %d\n",x,y);
    return 0;
 }
  // call by reference 
    void _swap(int *a, int *b) {
        int temp;
        temp = *a;
        *a = *b;
        *b = temp;
     //  printf("a = %d, b = %d\n",*a,*b);

    }


  // call by value
    // void swap(int a, int b) {
    //     int temp;
    //     temp = a;
    //     a = b;
    //     b = temp;
    //    printf("a = %d, b = %d\n",a,b); 
    // }
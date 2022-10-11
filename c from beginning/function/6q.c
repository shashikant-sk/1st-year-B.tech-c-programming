#include<stdio.h>
 
 void calculateprice(float value);
  int main() {
    float value = 100;
    calculateprice(value);
    return 0;
  }

  void calculateprice(float value) {
    value = value + (0.18 * value);

    printf("final price is : %0.2f \n", value);
  }

#include<stdio.h>
 
 int sum(int a , int b);
 int product(int a , int b);
 float average(int a , int b);

    int main() {
        int a = 3, b = 5;
        printf("    sum = %d\n ",     sum(a,b));
        printf("product = %d\n ", product(a,b));
        printf("average = %0.2f\n ", average(a,b));
        return 0;
    }
// call by value
    int sum(int a , int b) {
        return a + b;
    }

    int product(int a , int b) {
        return a * b;
    }

    float average(int a , int b) {
        return (a + b) / 2.0;
    }

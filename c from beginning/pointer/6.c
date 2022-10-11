#include<stdio.h>
 
void doWork(int a, int b, int *sum, int *product, float *average);
 
    int main() {
        int a = 3, b = 5;
        int sum, product;
        float average;
        doWork(a, b, &sum, &product, &average);
        printf("    sum = %d, product = %d, average = %0.2f\n", sum, product, average);
        return 0;
    }

    void doWork(int a, int b, int *sum, int *product, float *average) {
        *sum = a + b;
        *product = a * b;
        *average = (a + b) / 2.0;
    }
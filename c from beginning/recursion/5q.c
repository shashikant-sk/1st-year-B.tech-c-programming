#include<stdio.h>

float convertTemp(float celsius);

int main() {
    float n;
    printf("Enter your celsius : ");
    scanf("%f",&n);
   
     printf("far is : %f ",convertTemp(n));
    return 0;


}
float convertTemp(float n) {
   
    return n * (9.0/5.0) + 32;
}
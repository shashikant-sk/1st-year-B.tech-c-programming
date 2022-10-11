#include<stdio.h>
 
void Areacircle(float rad);
 
 int main() {

    float rad = 4; 
    Areacircle(rad);
    printf("area of circle is %f\n", rad); //  
    return 0;  
 }

 void Areacircle(float rad){
    rad = 3.14 * rad * rad;
    printf("area of circle is %0.2f \n",rad); 
    
 }
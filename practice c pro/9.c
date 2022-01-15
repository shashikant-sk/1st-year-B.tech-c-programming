// square number using function
// #include<stdio.h>
// double square(double num){
//     return (num*num);
// }
// int main(){
//     int num;
//     double n;
//     printf("Enter the number for Square:=");
//     scanf("%d",&num);
//     n=square(num);
//     printf("Square of %d is %.2f",num,n);
//     return 0;
// }


#include<stdio.h>
double square(double num){
    return(num*num);
}
int main(){
    int num;
    double n;
    printf("Enter the number for square :==");
    scanf("%d",&num);
    n=square(num);
    printf("Square of %d is %.2f",num,n);
    return 0;
}
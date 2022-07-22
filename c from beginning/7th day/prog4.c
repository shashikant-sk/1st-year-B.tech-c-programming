// // write a program to read a four digit integer and print the sum of it's digits

//     #include<stdio.h>
//     int main() {
//         int num, sum = 0;
//         printf("Enter a four digit number: ");
//         scanf("%d", &num);

//        sum = sum + num % 10;
//         num = num /  10;
//        sum = sum + num % 10;
//         num =num / 10;
//        sum = sum + num % 10;
//         num =num/ 10;
     


//         printf("The sum of the digits is: %d", sum);
//         return 0;
//     }

#include<stdio.h>
int main() {
    int num, rem, sum = 0;
    printf("Enter s digit number: ");
    scanf("%d", &num);
    while(num !=0){
    rem = num % 10;
    sum = sum + rem;
    num = num / 10;
    }

    
    printf("The sum of the digits is: %d", sum);
    return 0;

}
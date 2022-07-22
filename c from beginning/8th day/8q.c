// // #include<stdio.h>
// // int  main() {
// //     int n;
// //     do{
// //     printf("Enter the number: ");
// //     scanf("%d",&n);
// //     printf("%d\n",n);
// //     if(n%2!=0){
// //         break;
// //     }
// //     }while(1);
// //     printf("Thank you");
// //     return 0;
// // }







// #include<stdio.h>
// int main() {
//    while (1) {
//        int n;
//        printf("Enter the number: ");
//        scanf("%d",&n);
//        printf("%d\n",n);
//        if(n%2!=0){
//            break;
//        }
//    }
//     printf("Thank you");
//     return 0;
// }

// keep taking input from user untill user , user enters  multiple of 7 
#include<stdio.h>
int main() {
    do{
        int n;
        printf("Enter the number:");
        scanf("%d",&n);
        printf("%d\n",n);
        if(n%7==0){
            break;
        }

    }while (1);
    printf("Thank you");
    return 0;
}
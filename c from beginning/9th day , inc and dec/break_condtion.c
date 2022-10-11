// Break condition


// #include<stdio.h>
// int main() {
//     int n;
//     do{
//         printf("Enter the number :");
//         scanf("%d",&n);
//         printf("%d\n",n);
//         if(n%2!=0){
//             break;
//         }
//     }
//     while(1);
//     printf("Thank you");
//     return 0;
// }

#include<stdio.h>
int main() {
    int n;
    while (1)
    {
        printf("Enter the number :");
        scanf("%d",&n);
        printf("%d\n",n);
        if(n%2!=0){
            break;
        }
            
           
    }
    printf("Thank you");

    return 0;
}
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number to print the table :");
//     scanf("%d",&n);
//     for(int i=10;i>=1;i--){
//         printf("%d * %d = %d\n",n,i,n*i);
//     }
//     return 0;
// }
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number to print the table :");
    scanf("%d",&n);
    for(int i=10;i>=1;i--){
        printf("%d x %d = %d\n",n,i,n*i);
    }
    return 0;
}
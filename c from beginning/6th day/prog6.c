#include<stdio.h>
int main(){
    int n,fact=1;
    printf("Enter the number to find the factorial : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("The factorial of %d is %d",n,fact);
    return 0;
}
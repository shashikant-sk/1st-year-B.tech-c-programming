#include<stdio.h>
 int fibo(int n);
 int main() {
    int n1=0,n2=1,n3,number;
    printf("Enter the number :");
    scanf("%d",&number);
    printf("%d %d",n1,n2);
    fibo(number);
    return 0;
 }
    int fibo(int n) {
     int n1=0,n2=1,n3,i;
        for( i=2;i<n;i++) {
            int n3=n1+n2;
            n1=n2;
            n2=n3;
            printf(" %d ",n3);
        }
    }
      
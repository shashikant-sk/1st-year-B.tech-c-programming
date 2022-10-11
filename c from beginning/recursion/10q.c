#include<stdio.h>
#include<math.h>
 
 int Power(int n,int p);
    int main() {
        int n,p;
        printf("Enter the number : ");
        scanf("%d",&n);
        printf("Enter the power : ");
        scanf("%d",&p);
        printf("The power is : %d",Power(n,p));
        return 0;
    }
    int Power(int n,int p) {
        return pow(n,p);
    }
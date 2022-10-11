#include<stdio.h>
int main() {
    int n;
    int sum=0;
    printf("Enter the number");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum +=i;
    }
    printf("sum of the nautal No. is : %d", sum);
return 0;
}
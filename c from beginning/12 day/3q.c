#include<stdio.h>
int main() {
    int sum=0;
    for(int i=1; i<=50; i++){
        if(i%2==0){
            sum = sum + i;
            if(i ==50){
                printf("%d ", i);
                break;
            }
            printf("%d + ",i);
        }
    }
    printf(" sum = %d", sum);
    return 0;
}
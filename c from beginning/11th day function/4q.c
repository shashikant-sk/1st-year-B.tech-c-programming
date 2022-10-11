#include<stdio.h>
int main() {
    int sum =0,a,i;
 
    for(i=5;i<=50;i++){
        if(i%2==0){
            sum=sum+i;
            if(i==50){
                printf("%d ",i);
                break;
            }
            printf("%d + ",i);
        }


       
    }
    printf(" = %d ",sum);
    return 0;

}
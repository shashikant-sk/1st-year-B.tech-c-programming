#include<stdio.h>
int main() {
    int sum=0;
    for(int i=5;i<=50;i++)
    {

         sum = sum + i;
         if(i==50){
            printf("%d ",i);
            break;
         }
         printf("%d + ",i);
    }
        printf(" = %d ",sum);
    
    return 0;
}














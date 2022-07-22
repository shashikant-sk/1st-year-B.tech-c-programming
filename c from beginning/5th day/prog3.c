#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    
        for(int i=1;i<=n;i++){
            printf("%d ",i);
        sum=sum+i;
    }
   

    
    
    printf("Sum of the numbers from 1 to %d is %d",n,sum);
    
    return 0;
}
#include<stdio.h>
int naturalnum(int n);
int main(){
    int n;
    scanf("%d",&n);
  printf("Sum of natural number is : %d",naturalnum(n)) ;
}


int naturalnum(int n){
    if(n==0){
        return  0;
    }
  return n+naturalnum(n-1);  
}
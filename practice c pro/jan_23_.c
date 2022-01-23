#include<stdio.h>
int main(){
    int a,last;
    printf("\nEnter the last value to print even and odd:==");
    scanf("%d",&last);

    printf("\nThe Even number are :==\n");
    for (a=2;a<=last;a=a+2){
         printf(" %d",a);
    }

     printf("\nThe odd number are :==\n");
     for(a=1;a<=last;a=a+2)
     {
         printf(" %d",a);
     }
return 0;

}
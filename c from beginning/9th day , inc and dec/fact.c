#include<stdio.h>
int main() {
    int i,fact=1;
    printf("Enter the number for factorial : ");
    scanf("%d",&i);
    for(int j=i;j>=1;j--)
    {
        fact=fact*j;
    }
    printf("%d",fact);
}
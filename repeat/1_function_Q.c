#include<stdio.h>
#include<stdlib.h>
 int main(){
 add();
 iseven();
 return 0;
 }
 add()
 {
     int a,b,c;
     printf("Enter the Two number for addition :",);
     scanf("%d%d",&a,&b);
     c=a+b;
     printf("sum is %d",c);
     }

iseven()
{
    int a , b;
    printf("Enter the number to check enter number is even or odd: ");
    scanf("%d",&a);
    if(a%2==0)
    printf("Enter number is Even ");
    else
    printf("enter number is odd");
}


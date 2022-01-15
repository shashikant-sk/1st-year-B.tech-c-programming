#include<stdio.h>

int main()
{
    //Q10.WAP input a no and check whether 
    //that no is palindrome or not(ex-input no 121 and revrse no is 121.so that the no is palindrome)
    int a=0,rev=0;
    printf("Enter a number: ");
    scanf("%d",&a);
    int temp =a;
    for(;a!=0;a/=10)rev = (rev*10)+(a%10);
    if(temp == rev)printf("Palindrome.");
    else printf("Not a palindrome.");
    return 0;
}
// 6)WAP to test weather a number is palindrome or not using user-defined function
#include<stdio.h>

int isPalindrome(int);
int isPalindrome(int a)
{
    int temp=a,rev=0;
    while(a>0)
    {
        rev = (rev*10) + (a%10);
        a /= 10;
    }
    return rev==temp;
}

int main()
{  
    int a=0;
    printf("Enter a number to check palindrome: ");
    scanf("%d",&a);
    if(isPalindrome(a))printf("Palindrome!!");
    else printf("Not a palindrome!!");
    return 0;
}
#include<stdio.h>

int main()
{
    //Q1.WAP to check whether a character entered through keyboard is a digit, letter, special character etc or not. 
    char c;
    printf("Enter a character: ");
    scanf("%c",&c);
    if(c>='0'&&c<='9')printf("%c is a digit.",c);
    else if((c>='A'&&c<='Z') || (c>='a'&&c<='z'))printf("%c is an alphabet.",c);
    else printf("%c is a special character.",c);
    return 0;
}
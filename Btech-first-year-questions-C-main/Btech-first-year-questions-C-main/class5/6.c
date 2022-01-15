#include<stdio.h>
int main()
{
    //Q6.WAP to read an alphabet from the user and convert it into uppercase if the entered alphabet is in lowercase, otherwise display an appropriate message. 
    char c;
    printf("Enter character: ");
    scanf("%c",&c);
    c>='a'&&c<='z'?printf("%c",c-32):printf("Already in upper case!!");
    return 0;
}
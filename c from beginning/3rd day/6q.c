
//b. write a program to check if given character is digit or not. 
#include<stdio.h>
int main() {
    char c;
    // int a;
    printf("Enter a character:");
    scanf("%c", &c);
    if((c >= '0' && c <= '9'))
{
    printf("%c Enter character is a digit :",c);
}
else {
    printf("%c Enter character is not a digit :",c);
}
return 0;
}
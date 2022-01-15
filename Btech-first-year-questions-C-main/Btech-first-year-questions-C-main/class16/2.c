//Q2.Wap input a string and display in reverse order
#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    printf("Enter the string: ");
    gets(str);
    printf("The revrse string is: ");
    for(int i=strlen(str)-1;i>=0;i--)printf("%c",str[i]);
    return 0;
}
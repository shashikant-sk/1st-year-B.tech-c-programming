//Q5.WAP to print a string using pointer.
#include<stdio.h>
#include<string.h>

int main()
{
    char str[100],*s = NULL;
    printf("Enter a string: ");
    gets(str);
    int size = strlen(str);
    s = str;
    printf("The string is: ");
    for(int i=0;i<size;i++)printf("%c",*(s+i));
    return 0;
}
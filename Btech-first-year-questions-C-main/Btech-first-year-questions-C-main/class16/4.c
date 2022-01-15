//Q4.Wap input a string and copy it into another string in reverse order without using library function
#include<stdio.h>

int main()
{
    int len=0;
    char str[100],rev[100];
    printf("Enter the string: ");
    gets(str);
    for(int i=0;str[i]!='\0';i++)len++;
    for(int i=len-1;i>=0;i--)rev[len-i-1]=str[i];
    printf("The copied reversed string: ");
    puts(rev);
    return 0;
}
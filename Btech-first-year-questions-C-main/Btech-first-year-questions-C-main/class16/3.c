//Q3.Wap input a string and find out its length without using library function.
#include<stdio.h>

int main()
{
    int len=0;
    char str[100];
    printf("Enter the string: ");
    gets(str);
    for(int i=0;str[i]!='\0';i++)len++;
    printf("Lenght of string = %d",len);
    return 0;
}
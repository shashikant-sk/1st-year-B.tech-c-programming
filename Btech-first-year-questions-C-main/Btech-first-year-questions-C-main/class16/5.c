//Q5.wap input two string and concatenate one string into another one.
#include<stdio.h>
#include<string.h>

int main()
{
    int i=0,j=0;
    char str1[100],str2[100],con[200];
    printf("Enter the string 1: ");
    gets(str1);
    printf("Enter the string 2: ");
    gets(str2);
    for(i=0,j=0;str1[i]!='\0';i++,j++)con[j]=str1[i];
    for(i=0;str2[i]!='\0';i++,j++)con[j]=str2[i];
    printf("The concataneted string = ");
    puts(con);
    return 0;
}
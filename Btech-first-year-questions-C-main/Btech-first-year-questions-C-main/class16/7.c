//Q7.wap input two string check both the string are  equal or not without using library function
#include<stdio.h>

int main()
{
    int i=0,j=0,len1=0,len2=0;
    char str1[100],str2[100];
    printf("Enter the string 1: ");
    gets(str1);
    printf("Enter   the string 2: ");
    gets(str2);
    for(int i=0;str1[i]!='\0';i++)len1++;
    for(int i=0;str2[i]!='\0';i++)len2++;
    if(len1 != len2)
    {
        printf("Not equal!!");
        return 0;
    }
    for(int i=0;i<len1;i++)
        if(str1[i]!=str2[i])
        {
            printf("Not equal!!");
            return 0;
        }
    printf("Equal!!");
    return 0;
}
//Q6.input a string check whether inputted string palindrome or not
#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    printf("Enter the string: ");
    gets(str);
    int len = strlen(str);
    for(int i=0;str[i]!='\0';i++)
        if(str[i]!=str[len-i-1])
        {
            printf("Not palindrome!!");
            return 0;
        }
    printf("Palindrome!!");
    return 0;
}
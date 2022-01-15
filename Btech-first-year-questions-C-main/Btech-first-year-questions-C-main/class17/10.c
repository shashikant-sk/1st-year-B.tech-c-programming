//Q10. WAP to print a string in reverse using a pointer.
#include<stdio.h>
#include<string.h>

void reverse(char*,int);

void reverse(char* s,int size)
{
    for(int i=0,j=size-1;i<size/2;i++,j--)
    {
        int temp = *(s+i);
        *(s+i) = *(s+j);
        *(s+j) = temp;
    }
}

int main()
{
    char str[100],*s = NULL;
    printf("Enter a string: ");
    gets(str);
    int size = strlen(str),vowels=0;
    s = str;
    reverse(s,size);
    printf("The reversed string is: ");
    puts(str);
    return 0;
}
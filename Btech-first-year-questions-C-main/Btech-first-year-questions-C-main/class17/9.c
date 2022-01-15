//Q9. WAP to count vowels and consonants in a string using pointer.
#include<stdio.h>
#include<string.h>

int main()
{
    char str[100],*s = NULL;
    printf("Enter a string: ");
    gets(str);
    int size = strlen(str),vowels=0,cons=0;
    s = str;
    for(int i=0;i<size;i++) 
        if(*(s+i)=='a'||*(s+i)=='e'||*(s+i)=='i'||*(s+i)=='o'||*(s+i)=='u'||*(s+i)=='A'||*(s+i)=='E'||*(s+i)=='I'||*(s+i)=='O'||*(s+i)=='U')vowels++;
        else if(*(s+i)!=' ') cons++;
    printf("Number of vowels = %d \n",vowels);
    printf("Number of consonants = %d \n",cons);
    return 0;
}
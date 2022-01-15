//Q8.Wap input a string and input a word.count how many times that word present in the string
#include<stdio.h>
#include<string.h>

int main()
{
    int i=0,j=0,count=0;
    char str1[100],str2[100];
    printf("Enter the string: ");
    gets(str1);
    printf("Enter the word: ");
    gets(str2);
    while(1)
    {
        char w[100];
        for(j=0;str1[i]!=' ';j++,i++)
        {
            if(str1[i]=='\0')break;
            w[j]=str1[i];
        }
        if(strcmp(str2,w)==0)count++;
        if(str1[i]=='\0')break;
        i++;
    }
    printf("Word count = %d",count);
    return 0;
}
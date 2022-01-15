#include<stdio.h>
int main()
{
    //Q7.WAP to read a character from the user and test it whether it a vowel or consonant or not an alphabet.  
    char c;
    printf("Enter character: ");
    scanf("%c",&c);
    (c>='A'&&c<='Z')||(c>='a'&&c<='z')?((c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')?printf("vowel"):printf("consonant")):printf("Not an alphabet :)");
    return 0;
}
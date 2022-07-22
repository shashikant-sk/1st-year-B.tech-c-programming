#include<stdio.h>
#include<ctype.h>
int main (){
    char c;
    printf("\n Enter a character: : ");
    scanf("%c", &c);
    if((c == 'a' || c== 'e' || c == 'i' || c == 'o' || c == 'u') && (c == 'A' || c== 'E' || c == 'I' || c == 'O' || c == 'U'))
    {
        printf("\n %c is a vowel",c);
    }
    else if(isupper(c)){
        printf("\n %c is an uppercase alphabet",c);
    }
    else if(islower(c)){
        printf("\n %c is an lowercase alphabet",c);
    }
    else{
        printf("\n %c is not an alphabet",c);
    }

    return 0;
}
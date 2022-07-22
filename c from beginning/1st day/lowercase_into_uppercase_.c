// #include<stdio.h>
// int main(){
//     char c;
//     printf("Enter the character:");
//     scanf("%c",&c);
//     c=c-32;
//     printf("%c",c);
// }


// #include <stdio.h>
// int main() {
//     char c;
//     printf("Enter a character: ");
//     scanf("%c", &c);

//     if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
//         printf("%c is an alphabet.", c);
//     else
//         printf("%c is not an alphabet.", c);

//     return 0;
// }


// Program to check uppercase or lowercase alphabets
// #include<stdio.h>
// int main() {
//     char c;
//     printf("Enter a character :");
//     scanf("%c",&c);
//     if(c>='a' && c<='z'){
//         printf("%c is an lowercase alphabet.",c);
//     }
//     else if(c>='A'&& c<='Z'){
//         printf("%c is an Uppercase Alphabet",c);
//     }
//     else{
//         printf("%c is not an alphabet.",c);
//     }
//     return 0;
// }


//-=-------------------------==============================

//  Program to check uppercase or lowercase characters using library functions

#include <stdio.h>
#include <ctype.h> /* Used for isupper() and islower() */

int main()
{
    char ch;

    /* Input character from user */
    printf("Enter any character: ");
    scanf("%c", &ch);

    if(isupper(ch))
    {
        printf("'%c' is uppercase alphabet.", ch);
    }
    else if(islower(ch))
    {
        printf("'%c' is lowercase alphabet.", ch);
    }
    else
    {
        printf("'%c' is not an alphabet.", ch);
    }

    return 0;
}


#include<stdio.h>
#include<ctype.h>

int main(){
    char c;
    printf("Enter a character:");
    scanf("%c", &c);
    if(isupper(c)){
        printf("'%c' is an uppercase alphabet.",c);
    }
else if(islower(c)){
    printf("'%c' is an Lowercase alphabet .",c);
}
else{
    printf("'%c' is not an alphabet.",c);
}
return 0;
}

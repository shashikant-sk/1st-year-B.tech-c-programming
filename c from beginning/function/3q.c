#include<stdio.h>

void bonjur();
void namaste();

 int main() {
    char  ch;
    printf("Enter i for indian and f for franch :");
    scanf("%c",&ch);
    if(ch == 'i'){
        namaste();
    }
    else if (ch == 'f')
    {
        bonjur();
    }
    else {
        printf("invalid Input");
    }
    return 0;
    
 }

 void namaste()
 {
    printf("Namaste");
 }

 void bonjur() {
    printf("Bonjur");
 }
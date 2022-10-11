#include<stdio.h>

void namaste();
void bonjur();

int main(){
    char ch;
    printf("Enter the input i and f");
    scanf("%c",&ch);
    if(ch == 'i' || ch == 'I'){
        namaste();
    }
    else if(ch == 'f' || ch == 'F'){
        bonjur();
    }
    else {
        printf("-- Invalid Input");
    }
    return 0;
}

void namaste(){
    printf("Namasted");

}
void bonjur() {
    printf("Bonjur");
}
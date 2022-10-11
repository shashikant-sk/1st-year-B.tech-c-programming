#include<stdio.h>
void namaste();
void bonjur();

int main() {
    printf("Enter Number");
    char ch;
    scanf("%c", &ch);
    if(ch == 'i' || ch == 'I'){
        namaste(); }

    else if (ch == 'f' || ch == 'F') {
        bonjur();
    }
    
    else{
      printf("Invalid input");
    }
    return 0;
}




void namaste(){
    printf("Namste");
}
void bonjur(){
    printf("bonjur");
}




#include<stdio.h>
void Namaste();
void Bonjour();

int main() {
    printf("Enter F fro franch and I for india\n");
    char ch;
    scanf("%c", &ch);
    if (ch == 'f' || ch == 'F') {
         Bonjour();
    } else if (ch == 'i' || ch == 'I') {
        Namaste();
    }
     else
     {
            printf("Invalid input");
     }
     

    return 0;

}
void Namaste() {
    printf("Namaste\n");
}
void Bonjour() {
    printf("Bonjour\n");
}
// Output:
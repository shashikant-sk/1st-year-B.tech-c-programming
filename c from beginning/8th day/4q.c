#include<stdio.h>
int main() {
    int a,marks;
    printf("Enter the marks : ");
    scanf("%d",&marks);
    if( marks >=0 && marks <=30){
        printf("You are fail");
    }
    else if(marks <=30 && marks <=100) {
        printf("You are pass");
    }
    else {
        printf("Invalid marks");
    }

     
       return 0;
}
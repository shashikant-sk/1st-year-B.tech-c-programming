#include<stdio.h>
int main(){
    int marks , a ;
    printf("\n---------------------------\n---------------------------");
    printf("\nEnter number (0-100): = ");
    scanf("%d",&marks);
    if(marks >= 0 && marks <=30){
        printf("you are fail");
    }
    else if (marks > 30 & marks<=100 ){
        printf(" you are pass");
    }
    else
    {
        printf("Enter a valid number:");
    }
     printf("\n---------------------------\n---------------------------");
    return 0;
    }
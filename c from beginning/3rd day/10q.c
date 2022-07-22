#include<stdio.h>
int main() {
    int marks;
    printf("Enter the marks of the student :");
    scanf("%d",&marks);
    if (marks <30){
        printf(" the grades of student is : C ");
    }
    else if ((marks>=30 &&  marks<70 )) {
        printf(" the grades of student is : B ");
    }
    else if(( marks<=70 && marks<90 )) {
        printf(" the grades of student is : A ");
    }
    else if(( marks>90 &&  marks<=100)) {
        printf(" the grades of student is : A+ ");
    }
    else {
        printf(" the grades of student is : invalid : because you enter a invalid number ");
    }
    
    return 0;
}
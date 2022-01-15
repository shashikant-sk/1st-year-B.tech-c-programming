//Q1 - WAP to store one student's information(roll,name,marks) of an educational institute and display all data
#include<stdio.h>
struct student 
{
    char name[50];
    int roll;
    float marks;
} s;

int main() 
{
    printf("Enter information:\n");
    fflush(stdin);
    printf("Enter name: ");
    gets(s.name);
    printf("Enter roll number: ");
    scanf("%d", &s.roll);
    printf("Enter marks: ");
    scanf("%f", &s.marks);
    printf("\nDisplaying Information:\n");
    printf("Name: ");
    printf("%s \n", s.name);
    printf("Roll number: %d\n", s.roll);
    printf("Marks: %.2f\n", s.marks);
    return 0;
}
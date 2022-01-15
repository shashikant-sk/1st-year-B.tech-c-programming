//Q2 - WAP to store n student's information(roll,name,marks) of an educational institute and display all data
#include <stdio.h>
struct student 
{
    char name[50];
    int roll;
    float marks;
};

int main() 
{
    int size=0;
    printf("Enter number of students: ");
    scanf("%d",&size);
    struct student s[size];
    
    for(int i=0;i<size;i++)
    {
        printf("Enter information for student %d: \n",i+1);
        printf("Enter name: ");
        fflush(stdin);
        gets(s[i].name);
        printf("Enter roll number: ");
        fflush(stdin);
        scanf("%d", &s[i].roll);
        printf("Enter marks: ");
        fflush(stdin);
        scanf("%f", &s[i].marks);
    }

    for(int i=0;i<size;i++)
    {
        printf("\nDisplaying Information:\n");
        printf("Name: ");
        printf("%s", s[i].name);
        printf("\nRoll number: %d", s[i].roll);
        printf("\nMarks: %.2f", s[i].marks);
    }
    return 0;
}
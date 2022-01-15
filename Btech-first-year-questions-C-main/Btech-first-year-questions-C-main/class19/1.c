//Q1 - WAP to store n student's information (i.e. student's roll no, name, gender, marks in 5 subjects etc) of an educational institute 
//and display all the data with total marks of each student, using array of structure. If full mark of each subject is considered 
//as 100 and pass mark as 40, then display the list of students failed in a particular subject.
#include<stdio.h>

struct student
{
    char name[50];
    int roll;
    char gender;
    int mark[5];
};

int main()
{
    int size=0;
    printf("Enter the number of students: ");
    scanf("%d",&size);
    struct student s[size];
    for(int i=0;i<size;i++)
    {
        printf("Enter info of student %d: \n",i+1);
        printf("Enter name: ");
        fflush(stdin);
        gets(s[i].name);
        printf("Enter roll: ");
        fflush(stdin);
        scanf("%d",&s[i].roll);
        printf("Enter gender: ");
        fflush(stdin);
        scanf("%c",&s[i].gender);
        printf("Enter the mark for 5 subjects: ");
        scanf("%d %d %d %d %d",&s[i].mark[0],&s[i].mark[1],&s[i].mark[2],&s[i].mark[3],&s[i].mark[4]);
    }
    for(int i=0;i<size;i++)
    {
        printf("\nInfo of student %d: \n",i+1);
        printf("Name: %s \n",s[i].name);
        printf("Roll: %d \n",s[i].roll);
        printf("Gender: %c \n",s[i].gender);
        for(int j=0;j<5;j++)
        {
            printf("Mark in subject %d = %d\n",j+1,s[i].mark[j]);
            if(s[i].mark[j] < 40)printf("Failed in subject %d \n",j+1);
        }
    }
    return 0;
}

//Q4 - WAP to store n employees data such as employee name, gender, designation, department, basic pay etc using structures with 
//dynamically memory allocation. Calculate the gross pay of each employees as follows:
//Gross pay-basic pay + HR + DA
//HR=25% of basic, DA=75% of basic
#include<stdio.h>

struct employee
{
    char name[50];
    char gender;
    char desg[20];
    char dept[20];
    float basic_pay;
};

int main()
{
    int size=0;
    printf("Enter number of employees: ");
    scanf("%d",&size);
    struct employee s[size];
    
    for(int i=0;i<size;i++)
    {
        printf("Enter information of employee number %d:\n",i+1);
        printf("Enter name: ");
        fflush(stdin);
        gets(s[i].name);
        printf("Enter gender: ");
        fflush(stdin);
        scanf("%c",&s[i].gender);
        printf("Enter designation: ");
        fflush(stdin);
        gets(s[i].desg);
        printf("Enter department: ");
        fflush(stdin);
        gets(s[i].dept);
        printf("Enter basic pay: ");
        fflush(stdin);
        scanf("%f",&s[i].basic_pay);
    }

    for(int i=0;i<size;i++)
    {
        printf("\nInformation of employee number %d:\n",i+1);
        printf("Name: %s \n",s[i].name);
        printf("Gender: %c \n",s[i].gender);
        printf("Designation: %s \n",s[i].desg);
        printf("Department: %s \n",s[i].dept);
        printf("Gross pay = %.2f \n",s[i].basic_pay*2);
    }
    return 0;
}
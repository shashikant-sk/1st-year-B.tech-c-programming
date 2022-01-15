#include<stdio.h>

int main()
{
    //Q2. Program for analysis of people of certain age groups who are eligible for getting a suitable 
    //job if their condition and norms get satisfied using nested if statement.
    int age=0;
    printf("Enter age : ");
    scanf("%d",&age);
    if(age>=18 && age<=50)printf("Eligible for job.");
    else if(age<18 && age>=0 || age>50) printf("Not eligible for job.");
    else printf("Taroon ke seher se aya he? :)");
    return 0;
}
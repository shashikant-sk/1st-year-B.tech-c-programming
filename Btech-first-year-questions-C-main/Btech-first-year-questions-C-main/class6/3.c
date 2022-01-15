#include<stdio.h>

int main()
{
    //Q3.Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer,
    // calculate percentage and grade according to given conditions:
    // If percentage >= 90% : Grade A
    // If percentage >= 80% : Grade B
    // If percentage >= 70% : Grade C
    // If percentage >= 60% : Grade D
    // If percentage >= 40% : Grade E
    // If percentage < 40% : Grade F
    int a,b,c,d,e;
    printf("Enter 5 marks: ");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    float per = (a+b+c+d+e)/5;
    if(per>=90)printf("Grade A");
    else if(per>=80)printf("Grade B");
    else if(per>=70)printf("Grade C");
    else if(per>=60)printf("Grade D");
    else if(per>=40)printf("Grade E");
    else printf("Grade F");
    return 0;
}
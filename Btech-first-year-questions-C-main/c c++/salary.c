#include<stdio.h>
#include<conio.h>
void main()
{
    int s,h;
    printf("Enter the salary and bonus");
    scanf("%d %d",&s,&h);
    if (s>=4000)
       h=s*10/100;
    else s<=4000;
         h=s*5/100;
    printf("your salary %d",s);
    scanf("your bonus %d",h);
    getch();
}
    
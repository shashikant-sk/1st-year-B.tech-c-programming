#include <stdio.h>
  
int main() 
{ 
    //Q7.WAP to add two times in hour, minitue & second format .Entered through the keyboard in the format hh:mm:ss. 
    int h1,h2,m1,m2,s1,s2;
    int hour,minute,second;
    printf("Enter time 1: ");
    scanf("%d %d %d",&h1,&m1,&s1);
    printf("Enter time 2: ");
    scanf("%d %d %d",&h2,&m2,&s2); 
    second=s1+s2;
	minute=m1+m2+(second/60);
	hour=h1+h2+(minute/60);
	minute=minute%60;
	second=second%60;
    printf("After adding time: %d %d %d" ,hour,minute,second);   
    return 0; 
} 
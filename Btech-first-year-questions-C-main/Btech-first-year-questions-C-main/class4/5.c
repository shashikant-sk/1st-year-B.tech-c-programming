#include <stdio.h>
  
int main() 
{ 
    //Q5.WAP to convert given second into its equivalent hour, minute and second as per the following format. Example. 7560 second = 2 Hour, 27 Minute and 40 Second
    int m;
    printf("Enter seconds: ");
    scanf("%d",&m); 
    printf("%d minutes = %d hours %d minutes %d seconds" ,m,m/3600,(m%3600)/60,(m%3600)%60);   
    return 0; 
} 
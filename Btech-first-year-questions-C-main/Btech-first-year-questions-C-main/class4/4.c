#include <stdio.h>
  
int main() 
{ 
    //Q4.WAP to convert given paisa into its equivalent rupee and paisa as per the following format.Example. 550 paisa = 5 Rupee and 50 paisa 
    int p;
    printf("Enter paisa: ");
    scanf("%d",&p); 
    printf("%d paisa = %d ruppee and %d paisa" ,p,p/100,p%100);   
    return 0; 
} 
#include <stdio.h>
  
int main() 
{ 
    //Q6.WAP to convert a quantity in meter entered through keyboard into its equivalent kilometer and meter as per the following format. Example. 2430 meter = 2 Km and 430 meter.
    int m;
    printf("Enter meters: ");
    scanf("%d",&m); 
    printf("%d meters = %d Km %d meters" ,m,m/1000,m%1000);   
    return 0; 
} 
#include<stdio.h>

int main()
{
    //WAP to convert a quantity in meter entered through keyboard into its equivalent kilometer and meter as per the following format. Example. 2430 meter = 2 Km and 430 meter    
    int a;
    printf("Enter distance(in meters): ");
    scanf("%d",&a);
    printf("%d meters = %d Km and %d meters",a,a/1000,a%1000);
    return 0;
}
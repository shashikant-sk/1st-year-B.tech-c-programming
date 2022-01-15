#include <stdio.h>
int main()
{
    float eng, phy, chem, math, comp , bio, com; 
    float total, average, percentage;

    
    printf("Enter marks of seven subjects: \n");
    scanf("%f%f%f%f%f%f%f", &eng, &phy, &chem, &math, &comp, &bio, &com);

    
    total = eng + phy + chem + math + comp + bio + com;
    average = total / 7.0;
    percentage = (total / 700.0) * 100;

   
    printf("Total marks = %.2f\n", total);
    printf("Average marks = %.2f\n", average);
    printf("Percentage = %.2f", percentage);

    return 0;
}
#include<stdio.h>

int main()
{
    // Q4.Write a C program to input electricity unit charge and calculate the total electricity bill according to the given condition:
    // For first 50 units Rs. 0.70/unit
    // For next 100 units Rs. 1.05/unit
    // For next 100 units Rs. 1.29/unit
    // For unit above 250 Rs. 1.59/unit
    // An additional surcharge of 20% is added to the bill.
    float unit,price=0;
    printf("Enter the unit: ");
    scanf("%f",&unit);
    if(unit<=50)price += unit*0.7;
    else if(unit<=150)price += ((unit-50)*1.05) + (50*0.7);
    else if(unit<=250)price += ((unit-150)*1.29) + (50*0.7) + (100*1.05);
    else price += ((unit-250)*1.59) + (50*0.7) + (100*1.05) + (100*1.29);
    price += price*0.2;
    printf("Price = %.3f ruppees",price);
    return 0;
}
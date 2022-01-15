#include<stdio.h>

int main()
{
    // Q7. Using Switch statement, write a program that displays the following menu for the food items available to take order from the customer:
    // • B= Burger
    // • F= French Fries
    // • P= Pizza
    // • S= Sandwiches
    // The program inputs the type of food and quantity. It finally displays the total charges for the order according to following criteria:
    // • Burger = Rs. 200
    // • French Fries= Rs. 50
    // • Pizza= Rs. 500
    // • Sandwiches= Rs. 150

    char choice="";
    int price=0,quant=0;
    printf("Menu: \n");
    printf("B = Burger(Rs. 200) \n");
    printf("F = French Fries(Rs. 50) \n");
    printf("P = Pizza(Rs. 500) \n");
    printf("S = Sandwich(Rs. 150) \n");
    scanf("%c",&choice);
    printf("Enter quantity: ");
    scanf("%d",&quant);
    switch (choice)
    {
        case 'B':
            printf("U have to pay %d ruppee.",200*quant);
            break;
        case 'F':
            printf("U have to pay %d ruppee.",50*quant);
            break;
        case 'P':
            printf("U have to pay %d ruppee.",500*quant);
            break;
        case 'S':
            printf("U have to pay %d ruppee.",150*quant);
            break;
    default:
        break;
    }
    return 0;
}   
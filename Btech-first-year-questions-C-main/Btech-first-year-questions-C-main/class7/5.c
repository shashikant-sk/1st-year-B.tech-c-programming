#include<stdio.h>
int main()
{
    //Q5. Write a menu driven program with the following options: All days (mon,tue,wed,thurs,fri,sat)

    int number;
    printf("Enter A number to print its corresponding day:\n");
    printf("'1' for Monday\n");
    printf("'2' for Tuesday\n");
    printf("'3' for Wednesday\n");
    printf("'4' for Thursday\n");
    printf("'5' for Friday\n");
    printf("'6' for Saturday\n");
    printf("'7' for Sunday\n");
    scanf("%d",&number);
    switch(number)
    {
    case 1:
    printf("Monday");
    break;
    case 2:
    printf("Tuesday");
    break;
    case 3:
    printf("Wednesday");
    break;
    case 4:
    printf("Thursday");
    break;
    case 5:
    printf("Friday");
    break;
    case 6:
    printf("Saturday");
    break;
    case 7:
    printf("Sunday");
    break;
    default:
    printf("Incorrect Number Entered");
    }
    return 0;
}
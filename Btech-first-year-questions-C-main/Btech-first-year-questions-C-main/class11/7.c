#include<stdio.h>

int main()
{
    //Q7.WAP input 10 numbers into an array and display it reverse order.
    int a[10]={0};
    printf("Enter the array elements: ");
    for(int i=0;i<10;i++)
        scanf("%d",&a[i]);
    printf("The array elements are: \n");
    for(int i=9;i>=0;i--)
        printf("%d \n",a[i]);
    return 0;
}
#include<stdio.h>

int main()
{
    //Q6.WAP input 10 numbers into an array and display it.
    int a[10]={0};
    printf("Enter the array elements: ");
    for(int i=0;i<10;i++)
        scanf("%d",&a[i]);
    printf("The array elements are: \n");
    for(int i=0;i<10;i++)
        printf("%d \n",a[i]);
    return 0;
}
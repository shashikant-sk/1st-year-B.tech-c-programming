//Q2. Write a program in C for addition of two Matrices of same size
#include<stdio.h>

int main()
{
    int a[3][3],b[3][3];

    printf("Input the 1st 3x3 matrix: \n");
    for(int r=0;r<3;r++)
        for(int c=0;c<3;c++)
            scanf("%d",&a[r][c]);
    printf("\n"); 

    printf("Input the 2nd 3x3 matrix: \n");
    for(int r=0;r<3;r++)
        for(int c=0;c<3;c++)
            scanf("%d",&b[r][c]);
    printf("\n");  


    printf("Sum of matrix: \n");
    for(int r=0;r<3;r++)
    {
        for(int c=0;c<3;c++)
            printf("%d ",a[r][c]+b[r][c]);
        printf("\n");
    }

    return 0;
}
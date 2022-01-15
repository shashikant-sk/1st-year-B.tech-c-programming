//Q1.Write a program in C for a 2D array of size 3x3 and print the matrix
#include<stdio.h>

int main()
{
    int a[3][3];

    printf("Input the 3x3 matrix: \n");
    for(int r=0;r<3;r++)    
        for(int c=0;c<3;c++)
            scanf("%d",&a[r][c]);
    printf("\n");   

    printf("The 3x3 matrix: \n");
    for(int r=0;r<3;r++)
    {
        for(int c=0;c<3;c++)
            printf("%d ",a[r][c]);
        printf("\n");
    }

    return 0;
}
//Q3. Write a program in C for multiplication of two square Matrices.
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

    int res[3][3]={0};
    int i, j, k;
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            res[i][j] = 0;
            for (k = 0; k < 3; k++)
                res[i][j] += a[i][k] * b[k][j];
        }
    }

    printf("Multiplication of matrix: \n");
    for(int r=0;r<3;r++)
    {
        for(int c=0;c<3;c++)
            printf("%d ",res[r][c]);
        printf("\n");
    }

    return 0;
}
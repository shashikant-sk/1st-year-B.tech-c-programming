//Q4. Write a program in C to find transpose of a given matrix
#include<stdio.h>

int main()
{
    int a[3][3];

    printf("Input the 3x3 matrix: \n");
    for(int r=0;r<3;r++)
        for(int c=0;c<3;c++)
            scanf("%d",&a[r][c]);
    printf("\n");   

    int i, j,b[3][3];
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            b[i][j] = a[j][i];

    printf("Transpose of the 3x3 matrix: \n");
    for(int r=0;r<3;r++)
    {
        for(int c=0;c<3;c++)
            printf("%d ",b[r][c]);
        printf("\n");
    }
    return 0;
}
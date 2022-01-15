//Q6. Write a program in C to find sum of rows an columns of a Matrix
#include<stdio.h>

int main()
{
    int a[3][3],row[3]={0},col[3]={0};

    printf("Input the 3x3 matrix: \n");
    for(int r=0;r<3;r++)
        for(int c=0;c<3;c++)
            scanf("%d",&a[r][c]);
    printf("\n");

    for(int r=0;r<3;r++)
    {
        for(int c=0;c<3;c++)
        {
            row[r] += a[r][c];
            col[r] += a[c][r];
        }
    }
    
    printf("Row sum: \n");
    for(int i=0;i<3;i++)printf("%d\n",row[i]);

    printf("Column sum: \n");
    for(int i=0;i<3;i++)printf("%d  ",col[i]);

    return 0;
}
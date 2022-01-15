//Q5. Write a program in C to find sum of right diagonals of a matrix.
#include<stdio.h>

int main()
{
    int a[3][3],sum=0;
    
    printf("Input the 3x3 matrix: \n");
    for(int r=0;r<3;r++)
        for(int c=0;c<3;c++)
            scanf("%d",&a[r][c]);
    printf("\n");   

    for(int r=0;r<3;r++)
    {
        for(int c=0;c<3;c++)
            if(r==c)sum+=a[r][c];
    }

    printf("Sum of right diagonal = %d ",sum);

    return 0;
}
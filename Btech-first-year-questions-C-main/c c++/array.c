#include<stdio.h>
int main()
{
    int marks[2][4]={{34,45,58,69},{548,85,5,6}};
    for(int i=0;i<2;i++)
    {   
        for(int j=0;j<4;j++)
        {
            printf("the value of %d,%d element of the array is %d\n",i,j,marks[i][j]);
        }
    }
    return 0;
}

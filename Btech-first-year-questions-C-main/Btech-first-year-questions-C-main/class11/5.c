#include<stdio.h>

int main()
{
    //Q5.WAP to form a pyramid of numbers for a given number.
//       1
//     1 2 1
//   1 2 3 2 1
// 1 2 3 4 3 2 1

    for(int i=4;i>=1;i--)
    {
        int j=1;
        for(j=1;j<i;j++)printf("  ");
        for(j=1;j<=4-i+1;j++)printf("%d ",j);
        for(j-=2;j>=1;j--)printf("%d ",j);
        printf("\n");
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int i,j,n1,n2;
    printf("Enter the two positive integer: ");
    scanf("%d %d", &n1,&n2);
    for(i=n1+1;i<=n2-1;i++)
    {
        for(j=2;j<=i-1;j++)
        if(i%j==0)
        break;
        if(i==j)
        printf("%d ", i );
    }
    return 0;
}

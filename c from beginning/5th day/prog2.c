#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &n);
    for (int i = 1, j = n; i <= n && j >= 1; i++, j--)
    {
        sum = sum + i;
        printf(" %d ", j);
    }
    printf("Sum of the numbers from 1 to %d is %d", n, sum);

    // for reverse printing
    for (int i = n; i >= 1; i--)
    {
        printf("\n %d ", i);
       
        
    }
    return 0;
}
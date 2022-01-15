#include <stdio.h>
int main()
{
int n,sum=0;
printf("Enter the last natural number that you want the sum of \n:");
scanf("%d",&n);
// sum = 1 + 2 + 3 + 4 + 5 +......+n
// for (int i = 1; i <=n; i++)
// {
//  sum +=i;
// }
sum=(n*n+n)/2;
printf("Sum of first %d natural number is :%d",n,sum);
return 0;
}
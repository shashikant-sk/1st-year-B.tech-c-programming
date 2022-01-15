/*#include <stdio.h>
int main()
{
int i,n;
float a[100],sum=0,avg;
printf("Enter the n:");
scanf("%d",&n);
//reading array value 
printf(" Enter the number :\n");
for(i=0;i<n;i++)
{
     printf("a[%d] = ", i);
  scanf("%f", &a[i]);
}
// finding sum 
for ( i = 0; i <n; i++)
{
    sum = sum + a[i];
}
// calculating average value 
avg=sum/n;
printf(" sum is %f",sum);
printf("average is %f",avg);
return 0;
}*/

#include <stdio.h>
int main()
{
int a[10],i,sum=0;
float avg;

printf("Enter the 10 number :");
for ( i = 0; i <=9; i++)
scanf("%d",&a[i]);
for(i=0;i<=9;i++)
sum=sum+a[i];
avg= sum/10;
printf("sum is %d and  average is %f ", sum, avg);

return 0;
}
#include<stdio.h>
int main()
{
 float a[100], sum=0, avg;
 int i, n;
 
 printf("Enter n: ");
 scanf("%d", &n);
 /* Reading array */
 printf("Enter numbers:\n");
 for(i=0; i< n; i++)
 {
  printf("a[%d] = ", i);
  scanf("%f", &a[i]);
 }
 /* Finding sum */
 for(i=0; i< n; i++)
 {
  sum = sum + a[i];
 }
 /* Calculating average */
 avg = sum/n;
 /* Displaying Result */
 printf("Sum is %f\n", sum);
 printf("Average is %f", avg);
 return 0;
}

/* 
      #include<stdio.h>
int main()
{
    int a[10],i,sum=0;
    float avg;
    printf("Enter the number");
    for(i=0;i<=9;i++)
    scanf("%d", &a[i]);
    for(i=0;i<=9;i++)
    sum=sum+a[i];
    avg=sum/10.0;
    printf("average is %f",avg);
    return 0;
    
    
}
      
      */
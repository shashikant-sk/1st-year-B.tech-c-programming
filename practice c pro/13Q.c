#include <stdlib.h>
#include <stdio.h>

long fac(long n)
{
    if (n <= 1)
        return 1;
    return n * fac(n - 1);
}

int main()
{
    long a, sum = 0;
    printf("Enter a: ");
    scanf("%ld", &a);
    for (long i = 1; i <= a ; i++)

    printf("%ld!/%ld + ", i, i);

  printf("%ld!/%ld = ", a, a);
    
    for (long i = 1; i <= a; i++){
     
     sum += fac(i - 1);
  
    printf("%ld + ", fac(i) / i);
    }
  printf("%ld", fac(a) / a);
  
    sum += fac(a - 1);
  
    printf("\nThe sum of the series is : %ld\n", sum);
    return 0;
}






// #include<stdio.h>
// #include<stdlib.h>

// long fac(long n) {
//     if(n<=1)
//     return 1;
//     return n*fac(n-1);
// }

// int main  {
//     int a,sum=0;
//     printf("Enter the number for :=");
//     scanf("%d",&a);
//     for(long i=1;i<=a-1;i++)
//     printf("%d!/%d +", i,i);
//     printf("%d!/%d =",a,a); 
//     for(long i=1;i<=a-1;i++)
//     printf("%d +",i,i);
// }
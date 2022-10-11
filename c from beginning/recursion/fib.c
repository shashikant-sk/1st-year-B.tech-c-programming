#include<stdio.h>
 
 int fib(int n);
  int main() {

   
    printf("%d", fib(6)); 
    return 0;    

   
  } 

  int fib(int n) {
   if(n==0){
    return 0;
   }
   if (n==1){
    return 1;
   }
      int fibNm1 = fib(n-1);
      int fibNm2 = fib(n-2);
        int fibN = fibNm1 + fibNm2;

 //  printf(" fib of %d is %d ",n,fibN);
   return fibN;
  }


 // nth term is printed

//   #include<stdio.h>
 
//  int fibo(int n);
//  int main() {
//     int n1=0,n2=1,n3,number;
//     printf("Enter the number :");
//     scanf("%d",&number);
//     printf("%d %d",n1,n2);
//     fibo(number);
//     return 0;
//  }
//     int fibo(int n) {
//      int n1=0,n2=1,n3,i;
//         for(int i=2;i<n;i++) {
//             int n3=n1+n2;
//             n1=n2;
//             n2=n3;
//             printf(" %d ",n3);
//         }
//     }
      
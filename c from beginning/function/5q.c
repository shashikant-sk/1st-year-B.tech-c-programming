#include<stdio.h>

int table(int n); // function declaration

int main() {
    int n;
    printf("Enter the number for table: ");
    scanf("%d",&n); 
    // function calling
    table(n);  // argument / actual parameter
    
    return 0;
}
   // function definition
 int table (int n){  // parameter /formal parameter
    for(int i=1;i<=10;i++) {
         printf("%d * %d = %d \n", n, i, n * i);
      
    }
   
 }
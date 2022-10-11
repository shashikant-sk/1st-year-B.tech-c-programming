
#include<stdio.h>
void natural(int n);
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    natural(n);
// printf("%d",natural(n));

    return 0;
}

void natural(int n){
   if(n==0){
    printf("its not a natural number");
   }
   else if (n>=1){
    printf("Its a natural number");
   }
   
   }

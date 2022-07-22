#include<stdio.h>
int main() {
    add();
    isEven();    
    return 0;
}
add(){
    int a,b,c;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    c=a+b;
    printf("The sum of %d and %d is %d",a,b,c);

}
isEven(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    if(n%2==0){
        printf("%d is even",n);
    }
    else{
        printf("%d is odd",n);
    }
   
}
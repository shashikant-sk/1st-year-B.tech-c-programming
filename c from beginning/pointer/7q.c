// // Write a program in C to find the maximum number between two numbers using a pointer.

// #include<stdio.h>
 
//  int max(int *a , int *b);
//   int main(){
//     int a,b;
//     printf("Enter two numbers: ");
//     scanf("%d %d",&a,&b);
//   int  m= max(&a,&b);
//     printf("Maximum number is: %d",m);
//     return 0;

//   }
//     int max(int *a , int *b){
//         if(*a>*b)
//         return *a;
//         else
//         return *b;
//     }



     /// call by value


     #include<stdio.h>
     int max(int a, int b);
     int main() {
        int a, b;
        printf("Enter the number a and B :");
        scanf("%d%d",&a,&b);
        printf("maximum number is %d", max(a,b));
        return 0;
     }
     int max(int a,int b){
        if(a>b){
            return a;
        }
        else 
       return b;
     }
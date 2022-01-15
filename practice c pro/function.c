// // #include<stdio.h>  
// // void sum();  
// // void main()  
// // {  
// //     printf("\nGoing to calculate the sum of two numbers:");  
// //     sum();  
// // }  
// // void sum()  
// // {  
// //     int a,b;   
// //     printf("\nEnter two numbers");  
// //     scanf("%d %d",&a,&b);   
// //     printf("The sum is %d",a+b);  
// // }  

// // #include <stdio.h>
// // int main()
// // {
// //   int add(void);
// //   add();
// //   return 0;

// // }
// //  int add() {
// //    int a,b,c;
// //    printf("ENter the NO.");
// //    scanf("%d%d",&a,&b);
// //    c=a+b;
// //    printf("sum is %d",c);
// //  }




// // #include<stdio.h>
// // int main()
// // {

// //   int add(void);
// //   add();
  
// //   return 0;
// // }

// // int add(){
// //   int a,b,c;
// //   printf("ENter the number:==");
// //   scanf("%d%d",&a,&b);
// //   c=a+b;
// //   printf("sum is = %d",c);
 
// // } 




// #include<stdio.h>
// int main()
// {
//   int add(void);
//   add();
//   return 0;
// }

// int add() {
//   int a,b,c;
//   printf("Enter the two number:==");
//   scanf("%d %d",&a,&b);
//   c=a+b;
//   printf("sum  = %d",c);
// }


// #include<stdio.h>
// int main()
// {
//   int x,y;
//   int add(int,int );
//   printf("Enter TWO number:-");
//   scanf("%d%d",&x,&y);
//   add(x,y);
//   return 0;
// }

// int add(int x, int y)
// {
//   int c;
//   c=x+y;
//   printf("sum is %d",c);
// }


//Take Nothing Returns something

// #include<stdio.h>
// int main(){
//   int add(void);
//   int s;
//   s=add();
//   printf("sum is %d",s);

// }

//  int add()
//  {
//    int a,b,c;
//    printf("Enter the two number:=");
//    scanf("%d%d",&a,&b);
//    c=a+b;
//    return (c);
//  }

//Take something Returns Something

#include<stdio.h>
int main(){
  int add(int , int );
  int s,x,y;
  printf("Enter the TWo number:=");
  scanf("%d%d",&x,&y);
  s=add(x,y);
  printf("sum is %d",s);
}
int add(int a, int b){
  int c;
  c=a+b;
  return(c);
}
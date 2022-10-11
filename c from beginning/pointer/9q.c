// //Write a program in C to print the elements of an array in reverse order. using pointer

#include<stdio.h>
int main(){
    int a[10],i,n;
    printf("Enter the number of elements in array: ");
    scanf("%d",&n);
    printf("Enter the elements of array: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); // storing elements in array
    }
    printf("The elements of array in reverse order are: ");
    for(i=n-1;i>=0;i--){
        printf("%d ",a[i]);
    }
    return 0;
}   
// Write a program in C to find the sum of all elements of the array. using pointer
 
// #include<stdio.h>
// int main(){
//     int a[10],i,n,sum=0;
//     printf("Enter the number of elements in array: ");
//     scanf("%d",&n);
//     printf("Enter the elements of array: ");
//     for(i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     for(i=0;i<n;i++){
//         sum=sum+a[i];
//     }
//     printf("The sum of all elements of array is: %d",sum);
//     return 0;
// }

/////--------------------------------------------------------------

// Write a program in C to print the elements of an array in reverse order. using pointer in function

// #include <stdio.h>
// int reverse(int *a, int N);
// int main()
// {
//     int a[10], i, N;
//     printf("Enter the number of elements in array: ");
//     scanf("%d", &N);
//     printf("Enter the elements of array: ");
//     for (i = 0; i < N; i++)
//     {
//         scanf("%d", &a[i]); //
//     }
//     reverse(a, N);
//     return 0;
// }
// int reverse(int *a, int N)
// {
//     int i;
//     printf("The elements of array in reverse order are: ");
//     for (i = N - 1; i >= 0; i--)
//     {
//         printf("%d ", a[i]);
//     }
//     return 0;
// }


// -----------------------------------------------------------

// another approch

// Write a program in C to print the elements of an array in reverse order. using pointer

// #include <stdio.h>

// void swap(int *a, int *b)
// {
//     int ptr= *a;
//     *a= *b;
//     *b = ptr;

// }

// void rev(int n, int arr[])
// {
//     for(int i=0; i<n/2; i++)
//     {
//          swap(&arr[i],&arr[n-1-i]);
//     }
// }

// int main(){
//     int n=5;
//     int arr[]={1,2,3,4,5};
//     rev(n, arr);
//     for(int i=0; i<n; i++)
//     {
//         printf("%d ",arr[i]);
//     }

// }


////-----------------------------------------------------------------

// aonther approch

// #include <stdio.h>
// void main() 
// {
//    int n, i, arr1[15];
//    int *pt;
//    printf(" Input the number of elements to store in the array (max 15) : ");
//    scanf("%d",&n);
//    pt = &arr1[0];  // pt stores the address of base array arr1 
//    printf(" Input %d number of elements in the array : \n",n);
//    for(i=0;i<n;i++)
//       {
// 	  printf(" element - %d :",i+1);
      
// 	  scanf("%d",pt); //accept the address of the value
// 	  pt++;
// 	 } 	
	
//    pt = &arr1[n - 1];

//    printf("\n The elements of array in reverse order are :");

//    for (i = n; i > 0; i--) 
//    {
//       printf("\n element - %d : %d  ", i, *pt);
//       pt--;
//    }
// printf("\n\n");


// }

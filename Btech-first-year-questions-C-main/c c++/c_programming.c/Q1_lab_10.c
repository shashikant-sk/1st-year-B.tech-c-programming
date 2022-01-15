// #include<stdio.h>
// int  numPrint(int);
// int main()
// {
//     int n = 1;
// 	printf("\n\n Recursion : print first 50 natural numbers :\n");
// 	printf(" The natural numbers are :");
//     numPrint(n);
//     printf("\n\n");
//     return 0;
// }
// int numPrint(int n)
// {
//     if(n<=50)
//     {
//          printf(" %d ",n);
//          numPrint(n+1);
//     }
// } 
#include<stdio.h>  
void display(int);  
int main()  
{  
    int limit;  
    printf("Enter the number of terms to be printed\n");  
    scanf("%d", &limit);  
    printf("\nNatural Numbers from 1 To %d are:", limit);  
    display(limit);  
    return 0;  
}  
void display(int num)  
{  
    if(num)  
        display(num-1);  
    else  
        return;  
    printf("\n%d\n", num);  
}
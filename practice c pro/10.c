//swap to numbet using function
// #include<stdio.h>  
// void swap(int, int);  
// int main()  
// {  
//     int a, b;  
//     printf("\n\nEnter values for a and b ::=");  
//     scanf("%d%d", &a, &b);  
//     printf("\n\nBefore swapping: a = %d and b = %d\n", a, b);  
//     swap(a, b);  
//     return 0;  
// }  
// void swap(int x, int y)  
// {  
//     int temp;  
//     temp = x;  
//     x    = y;  
//     y    = temp;  
//     printf("\nAfter swapping: a = %d and b = %d\n", x, y);  
// }  




#include<stdio.h>
void swap(int,int);
int main()
{
    int a,b;
    printf("Enter the value for a and b :==");
    scanf("%d%d",&a,&b);
    printf("\n Before swapping : a = %d and b = %d\n",a,b);
    swap(a,b);
    return 0;
}

void swap(int a, int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("\n After swapping : a = %d and b = %d",a,b);
}


/*#include<stdio.h>
int main()
{
    int a , b,  add , sub ;
    float mult , div;
    printf("Enter the number :");
    scanf("%d %d",&a,&b);
    add=a+b;
    mult=a*b;
    div=a/b;
    sub=a-b;
    printf("\n add is %d :",add);
     printf("\n mult is %2.f :",mult);
    printf("\n div is %2.f :",div);
     printf("\n sub is %d :",sub);
     return 0;

}*/











// even and odd number 
/*#include<stdio.h>
int main()
{
    int num;
    printf("\n Enter the number :");
    scanf("%d",&num);
    if(num%2==0)
    printf("%d is even number",num);
    else
    printf("%d is odd number ",num);
    return 0;
}*/



/*
// odd or even number 
#include<stdio.h>
int main()
{
    int a;
    printf("\n Enter the number :");
    scanf("%d",&a);
    if(a>=0)
    {
        if(a%2)
        printf("%d is the odd number ",a);
        else
        printf("%d is the even number ",a);
    }
    else{
        printf("%d is negative integer",a);
    }
    return 0;
}*/




//  largest number 
/*#include <stdio.h>
int main() {
    double n1, n2, n3;
    printf("Enter three numbers: ");
    scanf("%lf %lf %lf", &n1, &n2, &n3);

    // if n1 is greater than both n2 and n3, n1 is the largest
    if (n1 >= n2 && n1 >= n3)
        printf("%.2lf is the largest number.", n1);

    // if n2 is greater than both n1 and n3, n2 is the largest
    else if (n2 >= n1 && n2 >= n3)
        printf("%.2lf is the largest number.", n2);

    // if both above conditions are false, n3 is the largest
    else
        printf("%.2lf is the largest number.", n3);

    return 0;
} */

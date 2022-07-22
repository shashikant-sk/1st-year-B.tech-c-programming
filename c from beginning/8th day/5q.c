// #include<stdio.h>
// int main () {
//     for(int i=0; i<=10; i++) 
//         printf(" %d", i);
    
//     return 0;
// }
#include<stdio.h>
#include<stdlib.h>
int main() 
{
    int i=0,n;
    printf("Enter the number : ");
    scanf(" %d",&n);
    while(i<=n)
    {
        printf(" %d",i);
        i++;
    }
    return 0;
}
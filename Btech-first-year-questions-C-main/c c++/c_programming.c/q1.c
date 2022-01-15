#include <stdio.h>
int main()
{
int i,size,a;
    printf("ENter the sizr of array");
    scanf("%d",&size);
    intr a[size];
    printf("Enetr number to seprate even and odd");
    for(i=0;i<size;i++)
    {
        sacnf("%d",&a[i]);
    }
    printf("even numver are");
    for(i=0;i<size;i++)
    {
        if(a[i]>=0)
        {
            if(a[i]%2==0)
            {
                printf("%d",a[i]);

            }
        }
    }
    prin(("odd number are ");
    for(i=0;i<size;i++)
    {
        if(a[i]>=0)
        {
            if(a[i]%2==1)
            {
                printf("%d",a[i]);
            }
        }
    } 
return 0;
}
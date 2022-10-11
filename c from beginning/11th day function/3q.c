#include<stdio.h>
int main() {
   int add(int , int);
   int s,x,y;
   printf("Entre the number for addition :");
   scanf("%d%d",&x,&y);
   s=add(x,y);
    printf("The sum is %d",s);

}
int add(int x,int y)
{
    int s;
    s=x+y;
    return s;
}
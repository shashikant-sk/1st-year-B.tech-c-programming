// fuction Take nothing as input and return nothing as output

#include <stdio.h>
void main()
{
    void add(void);
    add();
}
void add()
{
    int a, b, c;
    printf("Enter the value of a,b,c\n");
    scanf("%d%d%d", &a, &b, &c);
    printf("The sum of %d,%d,%d is %d\n", a, b, c, a + b + c);
}
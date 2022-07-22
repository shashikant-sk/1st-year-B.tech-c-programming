#include <stdio.h>
int main()
{
    printf("%d\n", !(5 > 2));
    printf("%d\n", !((5 > 2)&& (3>4)));

    return 0;
}
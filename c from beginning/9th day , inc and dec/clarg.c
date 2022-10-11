#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a = atoi(argv[1]), b = atoi(argv[2]);
    printf("Number before swap: \n");
    printf("a = %d , b = %d\n", a, b);
    int c = a;
    a = b;
    b = c;
    printf("Number after swap: \n");
    printf("a = %d , b = %d\n", a, b);
    return 0;
}
//Q2.WAP to print size of different types of pointer variables.
#include<stdio.h>

int main()
{
    int *in = NULL;
    char *c = NULL;
    float *f = NULL;
    double *d = NULL;
    printf("Size of char pointer = %d bytes \n",sizeof(c));
    printf("Size of int pointer = %d bytes \n",sizeof(in));
    printf("Size of float pointer = %d bytes \n",sizeof(f));
    printf("Size of double pointer = %d bytes \n",sizeof(d));
    return 0;
}
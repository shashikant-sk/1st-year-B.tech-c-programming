#include<stdio.h>

int main()
{
 int *in = NULL;
 char *c = NULL;
 float *f = NULL;
 double*d= NULL;
 printf("Size of char pointer = %dbytes\n",sizeof(c));
 printf("Size of int pointer = %dbytes\n",sizeof(in));
 printf("Size of float pointer = %dbytes\n",sizeof(f));
 printf("Size of double pointer = %d bytes\n",sizeof(d));
 return 0;
}
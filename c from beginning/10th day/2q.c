#include <stdio.h>

    int sum (int, int);//function declaration 
    int main ()
    {
        int total , a,b;
		printf("\n\n Function : a simple structure of function :\n");
		scanf("%d %d",&a,&b);
        total = sum (a, b);//function call
        printf ("The total is :  %d\n", total);
        return 0;
    }
    
    int sum (int a, int b) //function definition
    {
	    int s;
		s=a+b;
        return s; //function returning a value
    }

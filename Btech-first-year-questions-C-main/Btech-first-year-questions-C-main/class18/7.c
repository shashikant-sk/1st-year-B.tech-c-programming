//Q.7 -  WAP to declare an union named as ABC having two members a as character and b as integer Assign 'A' to a, 1088 to b respectively 
//through an union variable ob one by one and display these these values immediately. Now assign these values to a, b 
//through ob all together and display these values at last. Find the difference.
#include<stdio.h>

union ABC
{
    char a;
    int b;
};

int main()
{
    union ABC ob1;
    ob1.a = 'A';
    ob1.b = 1088;
    printf("For ob1 : a = %c , b = %d \n",ob1.a,ob1.b);
    union ABC ob2 = {'A',1088};
    printf("For ob2 : a = %c , b = %d \n",ob2.a,ob2.b);
    return 0;
}
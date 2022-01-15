//Q5 - WAP to declare an union named as ABC having three members a, b and c as character, integer and double respectively. 
//Assign user entered values to these members respectively one by one and display these values immediately. 
//Again assign these user entered values to a, b, c one by one all together and display these values at last. Find the difference.
#include<stdio.h>

union ABC
{
    char a;
    int b;
    double c;
};

int main()
{
    char a;
    int b;
    double c;
    printf("Enter char,int,double value: ");
    scanf("%c %d %lf",&a,&b,&c);
    union ABC u1;
    u1.a = a;
    u1.b = b;
    u1.c = c;
    printf("One by one scheme: \n");
    printf("a = %c \n",u1.a);
    printf("b = %d \n",u1.b);
    printf("c = %lf \n",u1.c);
    union ABC u2 = {a,b,c};
    printf("All at once scheme: \n");
    printf("a = %c \n",u2.a);
    printf("b = %d \n",u2.b);
    printf("c = %lf \n",u2.c);
    return 0;
}
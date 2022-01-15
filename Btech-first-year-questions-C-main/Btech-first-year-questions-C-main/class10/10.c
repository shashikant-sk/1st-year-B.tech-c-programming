#include<stdio.h>

int main()
{
    //Q10.Write a program in C to find LCM of any two numbers.
    int a,b,max,step,lcm;
    printf("Enter 2 numbers to find LCM: ");
    scanf("%d %d",&a,&b);
    if(a > b)max = step = a;
    else max = step = b;
    for(;;)
    {
        if(max%a == 0 && max%b == 0) 
        {
            lcm = max;
            break;    
        }
        max += step;
    }
    printf("LCM is %d", lcm);
    return 0;
}
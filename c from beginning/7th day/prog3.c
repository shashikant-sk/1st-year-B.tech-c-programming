#include<stdio.h>
// function declaration
void Namaste();
void bonjour();
int main()
{
    
    char c;

    printf("Enter f for Franch and i for India : ");
    scanf(" %c",&c);
    // 
    if(c=='i' || c=='I')
    {
        // function call
        Namaste();
    }
    else if(c=='F' || c=='f')
    {
        // function call
        bonjour();
    }
    else
    {
        printf("Invalid input");
    }
    return 0;
}
// function definition
void Namaste()
{
    printf("Namaste");
}
void bonjour()
{
    printf("Bonjour");
}

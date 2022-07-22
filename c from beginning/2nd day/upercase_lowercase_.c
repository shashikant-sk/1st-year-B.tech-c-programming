#include <stdio.h>
int main()
{
    char c;
    
    printf("Enter a character:");
    scanf("%c", &c);
    if (c = c - 32)
    {
        printf("%c this is Uppercase", c);
    }
    else if (c = c + 32)
    {
        printf("%c this is Lowercase", c);
    }
    else
    {
        printf("%c this is not an alphabet", c);
    }
   
    return 0;
}
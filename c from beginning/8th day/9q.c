#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number for factorial: ");
    scanf("%d", &n);
    int fact = 1;
    for (int i = n; i >= 1; i--)
    {
        fact = fact * i;
        if (i == 1)
        {
            printf("%d ", i);
            break;
        }
        printf("%d X ", i);
    }
    printf("= %d", fact);
}


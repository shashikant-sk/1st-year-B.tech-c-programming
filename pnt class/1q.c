#include <stdio.h>
int setbit(int n)
{
    int c = 0, i, res = 0;
    for (i = n; i > 0; i = i >> 1)
    {
        if (c % 2 == 1)
        {
            res = res | (1 << c);
        }
        c++;
    }
    return n | res;
}
int main()
{
    int n, m;
    printf("Enter a no : ");
    scanf("%d", &n);
    m = setbit(n);
    printf(" %d ", m);
}
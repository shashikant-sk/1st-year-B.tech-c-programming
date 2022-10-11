// Write a program in C to print all the letters in english alphabet using a pointer.

 #include <stdio.h>
int main()
{
    char *p;
    char a[26] = "abcdefghijklmnopqrstuvwxyz";
    p = a;
    for (int i = 0; i < 26; i++)
    {
        printf("%c ", *p);
        p++;
    }
    return 0;
}

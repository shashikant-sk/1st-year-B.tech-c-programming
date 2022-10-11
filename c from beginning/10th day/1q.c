// // printf the even numbers from 5 to 50
// #include <stdio.h>
// int main()
// {
//     int i;
//     int sum = 0;
//     for (i = 5; i <= 48; i++)
//     {
//         if (i % 2 == 0)
//         {
//             sum += i;
//             printf("%d + ", i);
//         }

//     }
//     printf("%d\n", 50);
//     sum += 50;
//     printf(" = %d\n", sum);
//     return 0;
// }

#include <stdio.h>
int main()
{
    int sum = 0;
    for (int i = 5; i <= 50; i++)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
            if (i == 50)
            {
                printf("%d ", i);
                break;
            }
            printf("%d + ", i);
        }
    }
    printf(" = %d ", sum);

    return 0;
}

// #include <stdio.h>
// int main()
// {
//     // for loop
//     for (int i = 1; i <= 100; i++)
//     {
//         printf("%d\n", i);
//     }
//     // while loop
//     int i = 1;
//     while (i <= 100)
//     {
//         printf("%d\n", i);
//         i++;
//     }
//     // do while loop
//     i = 1;
//     do
//     {

//         printf("%d\n", i);
//         i++;
//     } while (i <= 100);
//     return 0;
// }




#include<stdio.h>
int main( ){
    // for loop using
    printf("------------------For Loop------------------\n");
    for(int i=1;i<=100;i++){
        printf("%d\n",i);
    }
     printf("-----------while loop----------------------\n");

    // while loop using
    int i=1;
    while(i<=100) {
        printf("%d\n",i);
        i++;
    }
    // do while loop using 
    printf("-----------do while loop----------------------\n");
    i=1;
    do{
        printf("%d\n",i);
        i++;
    }
    while(i<=100);
return 0;
}

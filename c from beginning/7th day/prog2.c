// write 2 function - one print hello and second to print "good bye"

#include <stdio.h>
// function declaration
void printHello();
void printGoodBye();
int main()
{
    // function call
    printHello();
    printGoodBye();
    return 0;
}

// function definition
void printHello()
{
    printf("Hello World\n");
}

// function definition
void printGoodBye()
{
    printf("Good Bye\n");
}
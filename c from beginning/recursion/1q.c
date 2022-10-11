// #include<stdio.h>
// void printHW(int count); // fuction prototype

// int main() {
//     printHW(5); // fucction call
//     return 0;

// }
//  // fucntion definition
// void printHW(int count) { // count is the number of times to print "Hello World"
//     if(count == 0){ // base case
//         return; // return to the caller
//     }
//     printf("Hello world\n"); 
//      printHW(count-1); // recursive call
// }


#include<stdio.h>

void printHW(int count);

int main() {

    printHW(5);
    return 0;
}

 void printHW(int count) {
    if(count == 0){
        return;
    }
    printf("Hello world\n");
    printHW(count-1);
 }
















#include<stdio.h>
int main() {
    for(int i=1;i<=5;i++) {
        if(i==3)
        continue;  //in continue statement we can skip the current iteration and go to next iteration
   //     break; // in break statement we can stop the loop and go to next statement
        printf(" %d",i);        
        
        

    }
    printf("\n End the loop");
    return 0;

}
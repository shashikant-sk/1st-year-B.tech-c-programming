#include<stdio.h>
int main() {
    for(int i =1; i<=10; i++){
        if(i==6){
            continue; // skip the rest of the loop and start from the beginning
        }
    printf("%d\n",i);
}
return 0;
}
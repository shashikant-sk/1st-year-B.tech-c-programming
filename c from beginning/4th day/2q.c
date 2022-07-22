#include<stdio.h>
int main(){
    char c[] = "GATE2001";
    char *p =c;
    printf("%s",p+p[3]-p[1]);
       
        // p[3] is 'E' and p[1] is 'A'.  
        // p[3] - p[1] = ASCII value of 'E' - ASCII value of 'A' = 4
        // So the expression  p + p[3] - p[1] becomes p + 4 which is 
        // base address of string "2011"



    return 0;

}
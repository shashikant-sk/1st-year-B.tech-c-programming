#include<stdio.h>

int subpercentage(int sci , int math , int  chemis);

int main() {
    int sci, math, chemis;
    printf("Enter the marks obtain in science , math and chemistry :  ");
    scanf("%d%d%d",&sci, &math, &chemis);

    printf("total percentage of 3 Subject is :  %d ", subpercentage(sci,math,chemis));
    return 0;
}

int subpercentage(int sci , int math , int chemis){
    int total_per = (sci + math + chemis)/3;
    return total_per;
}
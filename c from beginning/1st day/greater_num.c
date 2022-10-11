#include<stdio.h>
int main(){
    int N1,N2,N3;
    printf("Enter THE Three numbers:");
    scanf("%d %d %d", &N1,&N2,&N3);
    if(N1>N2 && N1>N3){
        printf("%d is the greatest Number ",N1);        
    }
    else if(N2>N1 && N2>N3){
        printf("%d is the greatesr Number :",N2);
    }
    else if(N3>N1 && N3>N2){
        printf("%d is the greatest Number",N3);
    }
    else{
        printf("All the numbers are equal");
    }
    return 0;
}

// #include<stdio.h>
// int main(){
//     int a,b,c;
//     printf("Enter the Three numbers:");
//     scanf("%d %d %d",&a,&b,&c);
//     printf("%d is the greatest number",((a>b && a>c)?a:((b>a && b>c)?b:c)));
// return 0;
// }

// 
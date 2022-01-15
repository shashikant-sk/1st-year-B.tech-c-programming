#include<stdio.h>
#include<stdlib.h>
void insert(int n1, int *a, int len, int ele){
   int i;
   printf("Array elements after insertion is:\n");
   for(i=0;i<len-1;i++){
      printf("%d\n",*(a+i));
   }
   printf("%d\n",ele);
   for(i=len-1;i<n1;i++){
      printf("%d\n",*(a+i));
   }
}
int main(){
   int *a,n1,i,len,ele;
   printf("enter size of array elements:");
   scanf("%d",&n1);
   a=(int*)malloc(n1*sizeof(int));
   printf("enter the elements:\n");
   for(i=0;i<n1;i++){
      scanf("%d",a+i);
   }
   printf("enter the position where the element need to be insert:\n");
   scanf("%d",&len);
   if(len<=n1){
      printf("enter the new element that to be inserted:");
      scanf("%d",&ele);
      insert(n1,a,len,ele);
   } else {
      printf("Invalid Input");
   }
   return 0;
}
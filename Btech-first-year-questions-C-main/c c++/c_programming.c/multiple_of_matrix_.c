/*#include<stdio.h>
int main()
{
    int A[3][3],B[3][3],C[3][3],i,j,k,mul;
    printf("Enter the number for 1st mat :");
    for(i=0;i<=2;i++)
    for(j=0;j<=2;j++)
    scanf("%d",&A[i][j]);
    printf("Enter the number for 2nd matr: ");
    for(i=0;i<=2;i++)
    for(j=0;j<=2;j++)
    scanf("%d",&B[i][j]);
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
    {
        
    mul=0;
    for(k=0;k<=2;k++)
    mul=mul+A[i][j]*B[i][j];
    C[i][j]=mul;
    }
    for(i=0;i<=2;i++)
    {
    for(j=0;j<=2;j++)
        printf(" %d ",  C[i][j]);
        printf("\n");
    }
    }
    return 0;
}*/
#include <stdio.h>
int main()
{
  int a[50][50],b[50][50],c[50][50],i,j,k,rows1,columns1,rows2,columns2,sum=0;
  
       printf("\n\nMultiplication of two Matrices :\n");
       printf("----------------------------------\n");  
  
  printf("\nInput the rows and columns of first matrix(1st) : ");
  scanf("%d %d",&rows1,&columns1);
  printf("\nInput the rows and columns of second matrix(2nd) : ");
  scanf("%d %d",&rows2,&columns2);
  if(columns1!=rows2){
      printf("Mutiplication of Matrix is not possible.");
      printf("\nColumn of first matrix and row of second matrix must be same.");
  }
  else
      {
       printf("Input elements in the first matrix :\n");
       for(i=0;i<rows2;i++)
        {
            for(j=0;j<columns1;j++)
            {
	           printf("element - [%d],[%d] : ",i,j);
	           scanf("%d",&a[i][j]);
            }
        }   
       printf("Input elements in the second matrix :\n");
       for(i=0;i<rows2;i++)
        {
            for(j=0;j<columns2;j++)
            {
	           printf("element - [%d],[%d] : ",i,j);
	           scanf("%d",&b[i][j]);
            }
        }    
 	 printf("\nThe First matrix is :\n");
  		for(i=0;i<rows1;i++)
    		{
      		printf("\n");
      		for(j=0;j<columns1;j++)
          	printf("%d\t",a[i][j]);
    		}
  
  	printf("\nThe Second matrix is :\n");
  		for(i=0;i<rows2;i++)
    		{
      		printf("\n");
      		for(j=0;j<columns2;j++)
      		printf("%d\t",b[i][j]);
    		}
//multiplication of matrix
      for(i=0;i<rows1;i++)
      for(j=0;j<columns2;j++)
       c[i][j]=0;
    for(i=0;i<rows1;i++)   //row of first matrix
 { 
     for(j=0;j<columns2;j++)   //column of second matrix
    {  
                         sum=0;
           for(k=0;k<columns1;k++)
        sum=sum+a[i][k]*b[k][j];
            c[i][j]=sum;
   }
   }
  printf("\nThe multiplication of two matrices is : \n");
  for(i=0;i<rows1;i++)
     {
        printf("\n");
        for(j=0;j<columns2;j++)
         {
           printf("%d\t",c[i][j]);
         }
     }
  }
printf("\n\n");
return 0;
}

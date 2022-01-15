// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int choice,a,b,c,d;
//     while (1)
//     {
//         printf("\n\n------MENU---------\n");
//         printf("\n 1.ADDITION :");
//         printf("\n 2.print whole number:");
//         printf("\n 3.odd/even : ");
//         printf("\n 4.Exit :");
//         printf("\n\n-----------------------\n");

//         printf("Enter the choice between 1 to 4 :-");
//         scanf("%d",&choice);

//         switch (choice)
//         {
//     case 1:
//             printf("Enter the two number for addition -:");
//             scanf("%d%d",&a,&b);
//             c=a+b;
//             printf("sum is %d",c);   
//             break;

//     case 2:
//             printf("the whole number is --:");
//             for (int i = 0; i <10; i++)
//             printf("%d ",i);
//             printf("\n");
//             break;
              
//     case 3:
//             printf("Enter the number to know ODD/EVEN :");
//             scanf("%d",&a);
//             if(a%2==0)
//             printf("Its a EVEN number:");
//             else
//             printf("its a ODD number");
//             break;       
    
//     case 4: 
//             exit(0); 
            
//         default:
//         printf("--INVALID CHOICE--"); 
//         }
//     }
//     return 0;
// }

//==================================================================
// #include <stdio.h>
// #include<stdlib.h>

// int main()
// {
// int choice,a,b,c;
// while (1)
// {
//    printf("\n\n-----------menu-----------\n");
//    printf("\n 1.Addition-\n");
//    printf("\n 2.ODD/EVEN-\n");
//    printf("\n 3.print the Whole number-\n");
//    printf("\n 4.exit-\n");
//    printf("\n------------------------------\n");
 
//    printf("ENTER YOUR CHOICE BETWEEN 1 TO 4::==: ");
//    scanf("%d",&choice);
   
//        switch (choice)
//        {
//  case 1:
      
//          printf("\nENTER THE TWO NUMBER FOR ADDITION:==");
//          scanf("%d%d",&a,&b);
//          c=a+b;
//          printf("Sum is %d\n",c);
           
//            break;
      
//  case 2:
      
//       printf("\nENTER THE NUMBER TO KNOW EVER OR ODD:== ");
//       scanf("%d",&a);
      
//       if (a%2==0)
      
//           printf("It's a EVEN NUMBER");
      
//       else 
      
//          printf("It's a ODD NUMBER");
//     break;

//  case 3:
//     for (int i = 0; i <=9; i++)
//     {
//         printf("\nwhole number is :== %d",i);
//     }
//      break;

//  case 4: exit(0);  
       
//        default:
//        printf("---INVALID CHOICE---");
       
//        }
// }

// return 0;
// }

//========================================================================================
#include<stdio.h>
int main() {
        int choice ,a,b,c;
        while (1)
        {
                printf("\n 1.Addtion");
                printf("\n 2.Subtraction:");
                printf("\n 3.square number:");
                printf("\n 4.whole number:");
                printf("\n 5.even/odd:");
                printf("\n 6. Exit\n");

                printf("\n----------------------\n");
                printf("ENTER YOUR CHOICE BETWEEN 1 TO 6 :==");
                scanf("%d",&choice);

                switch (choice)
                {
       case 1: 
                 printf("Enter Two Number for Addtion:==");
                 scanf("%d%d",&a,&b);
                 c=a+b;
                 printf("Sum is %d\n",c);
                 printf("-----------------------");
                 break;
       case 2:
                 printf("Enter Two Number For Subtraction:==");
                 scanf("%d%d",&a,&b);
                 c=a-b;
                 printf("subtraction is %d\n",c);
                 printf("-----------------------");
                 break;

       case 3:
                 printf("Enter the number for Square:=="); 
                 scanf("%d",&a);
                 c=a*a;
                 printf("Square is %d",c);
                 printf("-----------------------");
                 break;
                 
       case 4:
                printf("The Whole number is :");
                for(a=0;a<=9;a++)
                {
                printf("%d",a);
                }
                printf("-----------------------");
                break;
                
       case 5: 
                printf("\nENTER THE NUMBER TO KNOW EVER OR ODD:== ");
                scanf("%d",&a);
                if(a%2==0)
                printf("Its a Ever Number:");
                else
                printf("its a ODD number:");
                printf("-----------------------");
                break;

        case 6: exit(0);        

                default:
                printf("---INVALID CHOICE---");
                        
        }
        
}
return 0;
}

//+++=========================================================
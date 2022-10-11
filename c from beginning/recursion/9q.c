// Write a function to print "Hot" or "Cold" depending on the temperature user enter by using recursion.

 #include <stdio.h> 
    void hotcold ( int  n ) ; 
     int  main () 
    { 
         int  n ; 
        printf ( "Enter the temperature : " ) ; 
        scanf ( "%d" , & n ) ; 
        hotcold ( n ) ; 
         return   0 ; 
     } 


     void  hotcold ( int  n ) 
    { 
         if ( n > 40 ) 
        { 
            printf ( "Hot" ) ; 
         } 
         else 
        { 
            printf ( "Cold" ) ; 
         } 
     }
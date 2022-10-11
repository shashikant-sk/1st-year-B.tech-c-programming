// will the address output be same  

// #include<stdio.h>
 
//  void printAddress(int n);
//  int main() {
//     int n=4;
//     printf("%p\n ", &n);
//     printAddress(n);
//     return 0;

//  } 
//   // call by value 
//  void printAddress(int n) {
//     printf("%p\n ", &n);
//  }

  

  // call by reference

  #include<stdio.h>
   
   void printAddress(int *n);
    int main() {
        int n=4;
        printf("address of N is :%p\n ", &n);
        printAddress(&n);
        return 0;
      
    } 
     // call by reference
    void printAddress(int *n) {
        printf("address of N is :%p\n ", n);
    }




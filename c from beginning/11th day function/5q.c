  #include<stdio.h>
  void namste();
  void bonjur() ;

  int main() {
    printf("Enter number :");
    char ch;
    scanf("%c",&ch);
    if(ch=='i' || ch=='I'){
        namste();
    }
    else if(ch == 'f' || ch == 'F'){
        bonjur();
    }
    else{
        printf("Invalid input");
    }
   return 0;

  }

  void namste(){
    printf("Namaste\n");
  }

    void bonjur(){
        printf("Bonjour\n");
    }
#include <stdio.h>
#include <string.h>
int sum (int x[]){
 
 int s = 0;
   for(int i=0; i<5; i++){
    s+= x[i];
    
   }
   return s;
}

int string (char x[]){
 
 int length = strlen(x);
   return length;
}

void main(){

printf("Question 1 =>\n");

  printf("Enter any Number =>\n");
  int num[5] = {6,4,1,5,2};



  printf("The sum of array is %d",sum(num));
   

     printf("\n");
     printf("Question 2 =>\n");

    char  x[] = "development";

    
   printf("The length of given string is %d", string(x));
}
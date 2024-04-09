#include <stdio.h>
#include <string.h>

 int square(){

 }

void main(){

printf("Question 1 =>\n");


  int num [] = {5,9,4,7,3};
  int reverse [5];
  int index = 4;
   int *p;

    p = &num[0];
   
    printf("Original Array =>\n");
    for(int i=0; i<5; i++){
    
      reverse[index] = *(p+i);
   
        printf("%d ", reverse[index]);
        index--;
    }
  printf("\n");
    printf("Reverse Array =>\n");
     for(int i=0; i<5; i++){
    
      
   
        printf("%d ", reverse[i]);
       
    }
    
}
#include <stdio.h>
#include <string.h>

 int square(){

 }

void main(){

printf("Question 1 =>\n");


  int num [] = {2,4,1,3,7};
  
   int *p;

    p = &num[0];
    // printf("%u %d",p+1, *(p+1));

    for(int i=0; i<5; i++){
    
    int squr = *(p+i) * *(p+i);
    printf("%d ", squr);
    }



   

     printf("\n");
printf("Question 2 =>\n");

    int x = 5;
    int y = 7;

    printf("x before swapping is %d\n", x);
    printf("y before swapping is %d\n", y);

    int *z = &x;
    int *l = &y;

    int temp = *z; 
    *z = *l;     
    *l = temp;     
    printf("x after swapping is %d\n", x);
    printf("y after swapping is %d\n", y);

     
     

    
}
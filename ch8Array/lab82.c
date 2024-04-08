#include <stdio.h>

main(){
    
   
  printf("Question 1 => \n");

   int array[5]= {7,4,9,5,2};
   int b[3] ={1,3,6};
   int c[8];
   
   for(int i=0; i<5; i++){
      c[i] = array[i];
   }

   for(int i=0; i<3; i++){
      c[i+5] = b[i];
   }

   for (int i=0; i<8; i++){
        printf("%d ", c[i] );

     }

   printf("\n");
   printf("Question 2 => \n");
   
    int leapYears[10]; 
    int year = 2020;   
    int count = 0;      

    printf("Leap years between 2020 and 2040:\n");
    
   
    while (year <= 2040) {
      
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            leapYears[count] = year; 
            count++;                 
            printf("%d\n", year);     
        }
        year++;
    }

   
    printf("\nLeap years stored in array:\n");
    for (int i = 0; i < count; i++) {
        printf("%d ", leapYears[i]);
    }



   printf("\n");
   printf("\n");
   printf("Question 3 => \n");
  printf("Squares are:\n");
   for (int i=0; i<5; i++){
        printf("%d ", array[i]*array[i] );

     }

}


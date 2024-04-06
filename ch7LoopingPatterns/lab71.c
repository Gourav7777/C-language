#include <stdio.h>

main(){

 int rows = 5;
 int i, j ;

    for (i = 1; i <= rows; i++) {
        
        for (j = i; j>=1; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }

   printf("\n");
   printf("Qusetion 2\n");

   for (i = rows; i >= 1; i--) {
        for (j = i; j <= rows; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    
   printf("\n");
   printf("Qusetion 3\n");

   for (i = rows; i >= 1; i--) {
        for (j = i; j <= rows; j++) {
            printf("%d ", i);
            
        }
        printf("\n");
    }

   printf("\n");
   printf("Qusetion 4\n");

   for (i =1; i<=rows; i++) {
        for (j = i; j <= rows; j++) {
            printf("%d ", j);
            
        }
        printf("\n");
    }

    printf("\n");
   printf("Qusetion 5\n");

   for (i =1; i<=rows; i++) {
        for (j = i; j <= rows; j++) {
            printf("%d ", i);
            
        }
        printf("\n");
    }

    printf("\n");
   printf("Qusetion 6\n");

   for (i =1; i<=rows; i++) {
        for (j = i; j <= rows; j++) {

            if(i%2==0){


                if(j%2==0){

                printf("%d ", 1);
               }
                else{
                printf("%d ", 0);
                }
            
            }
            else{

                if(j%2==0){

                printf("%d ", 0);
               }
                else{
                printf("%d ", 1);
                }
              

            }
        }
        printf("\n");
    }


    
   printf("\n");
   printf("Qusetion 7\n");
  
     
   
   for (i = 0; i < rows; i++) {
        char letter = 'A' + i;
        
        for (j = 0; j <= i; j++) {
            printf("%c ", letter - j);
        }
        printf("\n");
    }

       
   printf("\n");
   printf("Qusetion 8\n");
  
     int num=1;
   
   for (i = 1; i <= rows; i++) {
       
        
        for (j = 1; j <= i; j++) {
           printf("%d ", num);
           num++;
        }
        printf("\n");
    }
}
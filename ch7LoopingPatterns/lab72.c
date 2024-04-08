#include <stdio.h>

main(){

  
   printf("Qusetion 1\n");
   int rows = 5;
    for(int i=1; i<=rows; i++){

     for(int k=rows; k>i; k--){
           printf(" ");
     }

     for(int j=i; j>=1; j--){
           printf("%d", j);
     }

     printf("\n");
       
    }
    
   
   printf("\n");
   printf("Qusetion 2\n");

    for(int i=rows; i>=1; i--){

     for(int k=i; k>1; k--){
           printf(" ");
     }

     for(int j=i; j<=rows; j++){
           printf("%d", j);
     }

     printf("\n");
       
    }
    
   printf("\n");
   printf("Qusetion 3\n");

    for(int i=rows; i>=1; i--){

     for(int k=i; k>1; k--){
           printf(" ");
     }

     for(int j=i; j<=rows; j++){
           printf("%d", i);
     }

     printf("\n");
       
    }

   printf("\n");
   printf("Qusetion 4\n");

    for(int i=1; i<=rows; i++){

     for(int k=1; k<i; k++){
           printf(" ");
     }

     for(int j=i; j<=rows; j++){

          if(j%2!=0 ){
             
            

           printf("%d", 1);
             

          }
          else{
            printf("%d", 0);
          }
     }

     printf("\n");
       
    }

   printf("\n");
   printf("Qusetion 5\n");

    for(int i=rows; i>=1; i--){

     for(int k=i; k<rows; k++){
           printf(" ");
     }

     for(int j=i; j>=1; j--){
       printf("%d", j);
        
     }

     printf("\n");
       
    }

   printf("\n");
   printf("Qusetion 6\n");

   
    for(int i=rows; i>=1; i--){

     for(int k=i; k<rows; k++){
           printf(" ");
     }

     for(int j=5; j>= 5-i+1; j--){
       printf("%d", j);
        
     }

     printf("\n");
       
    }

   printf("\n");
   printf("Qusetion 7\n");

    
    for(int i = 1; i <= rows; i++){

      for (int j = 1; j <= rows - i + 1; j++) {
            printf("%d", j);
        }

     
     for(int k=1; k<i; k++){
           printf(" ");
     }

 
     for(int l=1; l<i; l++){
           printf(" ");
     }
    
     for(int m=rows-i+1; m>=1; m--){
       printf("%d", m);
        
     }

     printf("\n");
       
    }


    printf("\n");
    printf("Qusetion 8\n");

    
    for(int i = 1; i <= rows; i++){

      for (int j = 1; j <= rows - i + 1; j++) {
            printf("%d", j);
        }

     
     for(int k=1; k<i; k++){
           printf(" ");
     }

 
     for(int l=1; l<i; l++){
           printf(" ");
     }
    
     for(int m=rows-i+1; m>=1; m--){
       printf("%d", m);
        
     }

     printf("\n");
       
    }



    for(int i = 1; i <= rows; i++){

      for (int j = 1; j <=i; j++) {
            printf("%d", j);
        }

     
     for(int k=i; k<rows; k++){
           printf(" ");
     }

 
     for(int l=i; l<rows; l++){
           printf(" ");
     }
    
     for(int m=i; m>=1; m--){
       printf("%d", m);
        
     }

     printf("\n");
       
    }

    printf("\n");
    printf("Qusetion 9\n");

    
    for(int i = 1; i <= rows; i++){

      for (int j = 1; j <= rows - i + 1; j++) {
            printf("%d", j);
        }

     
     for(int k=1; k<i; k++){
           printf(" ");
     }

     printf("\n");
       
    }
  

   for(int i = 1; i <= rows; i++){

      for (int j = 1; j <=i; j++) {
            printf("%d", j);
        }

     
     for(int k=i; k<rows; k++){
           printf(" ");
     }

 
   

     printf("\n");
       
    }


    printf("\n");
    printf("Qusetion 10\n");

   for (int i = 1; i <= rows; i++) {
       
        for (int j = i; j<rows; j++) {
            printf(" ");
        }

      
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }

        
        for (int k = i - 1; k >= 1; k--) {
            printf("%d", k);
        }

        printf("\n");
    }

   
   printf("\n");
   printf("Qusetion 11\n");

    for (int i = 1; i <= rows; i++) {
       
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }

       
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }

        printf("\n");
    }
}
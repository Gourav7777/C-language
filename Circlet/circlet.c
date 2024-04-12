#include <stdio.h>

main(){

//  int rows = 5;
 int i, j ;

    for (i = 41; i <= 45; i++) {
        
        for (j = 41; j<=i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

   printf("\n");
   printf("Qusetion 2\n");
 int num= 11;
   for (i = 1; i<=5; i++) {
        for (j = 1; j <=i ; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
    
   printf("\n");
   printf("Qusetion 3\n");

 for(int i=5; i>=1; i--){

     for(int k=1; k<i; k++){
           printf(" ");
     }

     for(int j=i; j<=5; j++){
           printf("%d", j);
     }

     printf("\n");
       
    }

   printf("\n");
   printf("Qusetion 4\n");

    for(int i=1; i<=5; i++){

     for(int k=1; k<i; k++){
           printf(" ");
     }

     for(int j=i; j<=5; j++){

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

for(int i = 1; i <= 5; i++){

      for (int j = 1; j <=i; j++) {
            printf("%d", j);
        }

     
     for(int k=i; k<5; k++){
           printf(" ");
     }


      for(int k=i; k<5; k++){
           printf(" ");
     }
      for (int j = i; j>=1; j--) {
            printf("%d", j);
        }
 
   

     printf("\n");
       
    }



    printf("\n");
   printf("Qusetion 6\n");

  for (int i = 5; i>=1; i--) {
       
        for (int j = 1; j<i; j++) {
            printf(" ");
        }

      
        for (int j = i; j <= 5; j++) {
            printf("%d", j);
        }

        
        for (int k = 4; k>=i; k--) {
            printf("%d", k);
        }

        printf("\n");
    }



    
   printf("\n");
   printf("Qusetion 7\n");
  
     
   
 for (int i = 0; i < 5; i++) {
        
        for (int j = 0; j < 5; j++) {
          
            if (i == 0 ||   i==2  ){

                     printf("* ");

              
            } 
            
            else {
              
                if  ( j == 0 || j == 5 - 1  ) {
                     printf("* ");

                 }
                 else{

                printf("  ");
                 }
            }
        }
    
        printf("\n");
    }
       
   printf("\n");
   
}
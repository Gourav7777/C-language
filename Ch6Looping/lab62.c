#include <stdio.h>

main(){

  int n = 10;
  
  int i=1;
   

   do
   {
      printf("%d ", i);
        i++; 
   } while (i<=10);
   
    printf("\n");
  
  
    for(i=1; i<=10; i++){
      printf("%d ", i);
    }

    
  printf("\n");
  i=1;
      do
   {
      if(i%2==0){

      printf("%d ", i);
      }
        i++; 
   } while (i<=10);
   
    printf("\n");
    printf("first 10 Fibonnacci series numbers \n");
   
   int first =0,second=1,next;
    for ( i=0; i<10; i++)
    {  
        if(i<=1){
            next = i;
        }

        else{
           next = first +second;
           first = second;
           second = next;
        }
        
        printf("%d ", next);
    }
    

}
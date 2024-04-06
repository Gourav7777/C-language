#include <stdio.h>

main(){

  int n = 10;
  
  int i=1;
   while (i <= n) { 
        printf("%d ", i);
        i++; 
    }
    printf("\n");

    
    i = n;
    while (i >= 1) { 
        printf("%d ", i);
        i--; 
    }
   printf("\n");
    i =n;
    while(i>=1){

      if(i%2!=0){

       printf("%d ", i);
      }
        i--; 
    }

   printf("\n");

   int startyear = 2020, endyear=2040;
   
    int year = startyear;

    printf("Leap years between %d and %d are:\n", startyear, endyear);

    while (year <= endyear) {
        
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            printf("%d ", year);
        }
        year++; 
    }
    

}
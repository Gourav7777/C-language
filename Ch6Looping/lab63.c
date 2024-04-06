#include <stdio.h>

main(){

  int n = 10 , sum=0;
  
  int i=1;
   
for ( i=1; i<=10; i++)
    {  
      
        sum+= i;
    }
    
        printf("Sum from 1 to 10 is %d \n",sum);
sum = 1;
        for ( i=1; i<=5; i++)
    {  
      
        sum*= i;
    }
    
        printf("Factorial of 5 is %d \n",sum);


      sum = 5;
     for ( i=1; i<=10; i++)
    {  
        int z = sum*i;
        printf("5 * %d = %d\n" , i,z );
       
    }
    


}
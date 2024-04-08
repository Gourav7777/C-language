#include <stdio.h>

 main()
{  

   printf("Question 1 => \n");

   int array[]= {7,5,3,5,3,-1};
   int length=0;
    while(array[length]!= -1){
        length++;
    }

  printf("%d",length);



  printf("\n");
  printf("Question 2 => \n");
    length=0;
   float average = 0;
   float sum = 0;
    while(array[length]!= -1){
        sum+= array[length];
        length++;
    }
    average = sum / length;
    
    printf("Sum is %.2f\n", sum);
    printf("Average is %.2f\n", average);

    
   printf("\n");
   printf("Question 3 => \n");
   length=0;
    int b[] = {5,6,7,9,4,-1};
    int c[5];

    while(array[length]!= -1){
        c[length] = array[length] + b[length];
        length++;
    }
 
     for (int i=0; i<length; i++){
        printf("%d ", c[i] );

     }
    
}

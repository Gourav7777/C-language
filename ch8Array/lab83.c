#include <stdio.h>

main(){

 printf("Question 1 =>\n");


   int rows = 3;
   int col = 3;

   int a [3][3] = {{2,4,1},
                   {3,5,4},
                   {8,2,6} };
   
  
    float sum = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < col; j++) {
            sum += a[i][j];
        }
    }

    float average = sum / (rows * col);

    printf("Average of the elements in the array: %.2f\n", average);


  printf("\n");
  printf("Question 2 =>\n");

  int b[3][3] = {{3,6,2}, {5,6,8},{3,7,4} };
  int c [3][3];
  for (int i = 0; i < rows; i++) {
        for (int j = 0; j < col; j++) {
             
           
            c[i][j] =  a[i][j] +  b[i][j];
        }
    }

     for (int i = 0; i < rows; i++) {
        for (int j = 0; j < col; j++) {
             
              printf(" %d", c[i][j]);
           
           
        }
        printf("\n");
    }

   

  printf("\n");
  printf("Question 3 =>\n");

     int diagonalsum = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < col; j++) {
            if(i==j){
            diagonalsum += a[i][j];

            }
        }
    }

    printf("Diagonal sum is : %d", diagonalsum);


  printf("\n");
  printf("Question 4 =>\n");

  int x [5][5] = {{2,4,1,6,3},
                   {9,5,4,6,7},
                  
                   {8,2,6,3,5},
                   {3,4,8,5,1},
                    {2,3,9,5,7}
                    };

     int boundarysum = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if(i==0 || i==4){
            boundarysum+= x[i][j];

            }
           else{
              
               if(j==0 || j==4){
                 boundarysum+= x[i][j];
               }
           }
        }
    }

    printf("Boundary sum is : %d", boundarysum);

}
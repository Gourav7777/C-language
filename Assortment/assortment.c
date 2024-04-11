#include <stdio.h>
#include <string.h>

void main(){

printf("Question 1 =>\n");

 int arr[5] = {2,3,-1,-5,8};
    
   printf("Whole Array: \n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
        // scanf("%d", &arr[i]);
    }
    
printf("\n");
    printf("Negative elements from the Array: \n");
    for (int i = 0; i < 5; i++) {
        if (arr[i] < 0) {
            printf("%d, ", arr[i]);
        }
    }
   
  

printf("\n");
printf("Question 2 =>\n");
int large = 0;
    for (int i = 0; i < 5; i++) {
        if (arr[i] >large) {
            large = arr[i];
        }
    }
  printf("Largest element from the Array: %d\n",large);

printf("\n");
printf("Question 3 =>\n");  

int newArr[3][3] = { {2,4,1},
                      {3,5,4},
                      {8,2,6} 
                    
                     };
 
 printf("Normal Matrix =>: \n");
  for ( int i = 0; i < 3; i++) {
        for ( int j = 0; j < 3; j++) {
            printf("%d ", newArr[i][j]);
        }
        printf("\n");
    }

  printf("Transpose Matrix =>: \n");  
  for ( int i = 0; i < 3; i++) {
        for ( int j = 0; j < 3; j++) {
            printf("%d ", newArr[j][i]);
        }
        printf("\n");
    }
   printf("\n");
printf("Question 4 =>\n");                    
int row, col, index, rowsum = 0,colsum=0;
    
    printf("Enter  row number: \n");
    scanf("%d", &row);

    printf("Enter  column number: \n");
    scanf("%d", &col);

     for ( int i = 0; i < 3; i++) {
        for ( int j = 0; j < 3; j++) {


               if(i+1==row ){
               
            rowsum+= newArr[i][j];

               }

                if(j+1==col ){
               
            colsum+= newArr[i][j];

               }
            
        }
    }

        printf("Sum of row %d and col %d is %d and %d\n", row,col,rowsum,colsum);
}
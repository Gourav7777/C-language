#include <stdio.h>
#include <string.h>

int cube(int *ptr) {
    return (*ptr) * (*ptr) * (*ptr);
}

void main(){

printf("Question 1 =>\n");


 
    char str[25] = "hello world";

    char *p = str; 
    int length = 0;

    while (*p != '\0') {
        length++;
        p++; 
    }

    printf("Length of the string: %d\n", length);



   

     printf("\n");
printf("Question 2 =>\n");

  int a[2][2];

a[0][0] = 3;
a[0][1] = 2;
a[1][0] = 5;
a[1][1] = 4;

    
    int *ptr = &a[0][0]; 

    for (int i = 0; i < 2; i++) {
         for (int j = 0; j < 2; j++) {
            int cubeResult = cube(ptr); 
            printf("Cube of %d = %d\n", a[i][j], cubeResult);
            ptr++; 
        }
    }

     
     

    
}
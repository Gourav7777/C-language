#include <stdio.h>
main(){

printf("Question 1  Swap two Variables with using Third Variable \n");
       
       int a =8, b=7,c;
       printf("a is %d and b is %d\n",a,b);
        c = a;
        a = b;
        b = c;


        printf("But Now a is %d and b is %d\n",a,b);
        printf("\n");

printf("Question 2  Swap two Variables without using Third Variable \n");
       
       int e =8, f=7 ;
       printf("e is %d and f is %d\n",e,f);
       e = e+f;
       f = e-f;
       e = e-f;


        printf("But Now e is %d and f is %d\n",e,f); 
        printf("\n");      
       
printf("Question 3  program to find answer of (x+y)^2 \n");       
        int x = 5, y = 3;
        int result;

    
        result = (x + y) * (x + y);
        printf("The result of (%d + %d)^2 is: %d\n", x, y, result);
        printf("\n"); 


printf("Question 4  program to find answer of (x-y)^2 \n");       
       
        result = (x - y) * (x - y);
        printf("The result of (%d - %d)^2 is: %d\n", x, y, result);
        printf("\n"); 
        


printf("Question 5  program to find answer of (x+y)^3 \n");       
       
        result = (x + y) * (x + y) * (x + y);
        printf("The result of (%d + %d)^3 is: %d\n", x, y, result);
        printf("\n"); 
    

}
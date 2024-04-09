#include <stdio.h>

int cube (int x){

  return x*x*x;
}

int isDivisible(int num) {
   

        if (num % 3 == 0 && num % 5 == 0)
        return 1; 
    else
        return 0; 
}


void main(){

printf("Question 1 =>\n");

  printf("Enter any Number =>\n");
  int num;

  scanf("%d",&num);

  printf("The cube of num is %d",cube(num));
   

     printf("\n");
     printf("Question 2 =>\n");

    int  x;

    printf("Enter the number: ");
    scanf("%d", &x);

   

    int result = isDivisible(x);

    if (result == 1)
        printf("%d is divisible by 3 and 5\n", x );
    else if (result == 0)
        printf("%d is not divisible by 3 and 5\n", x);


}
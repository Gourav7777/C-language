#include <stdio.h>
#include <string.h>

void main(){

printf("Question 1 =>\n");


  char i ='a';

  do
  {
    printf("%c ", i);
    i=i+4;
  } while (i<='z');
  

printf("\n");
printf("Question 2 =>\n");

  char num[100];
    
    printf("Enter a number: ");
    scanf("%s", num);

    int digitCount = 0;
    int index = 0;

    while (num[index] != '\0') {
        if (num[index] >= '0' && num[index] <= '9') {
            digitCount++;
        }
        index++;
    }

    printf("Number of digits in %s: %d\n", num, digitCount);

printf("\n");
printf("Question 3 =>\n");    

 char number[100];

    printf("Enter a number: ");
    scanf("%s", number);

    int length = strlen(number);
    int firstDigit = number[0] - '0'; 
    int lastDigit = number[length - 1] - '0'; 

    int sum = firstDigit + lastDigit;

    printf("First digit: %d\n", firstDigit);
    printf("Last digit: %d\n", lastDigit);
    printf("Sum of first and last digit: %d\n", sum);
    
}
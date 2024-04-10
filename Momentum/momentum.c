#include <stdio.h>


void main(){

printf("Question 1 =>\n");

int num;
printf("Enter any number =>\n");
scanf("%d", &num);

if(num%2==0){

printf("The number is Even\n");  
}
else{
printf("The number is Odd\n");  
}
  
 
printf("\n");
printf("Question 2 =>\n");

int units;
    printf("Enter Electricity Units =>\n");
    scanf("%d", &units);

    int bill = 0;

    if (units <= 50) {
        bill = units * 0.50;
    } else if (units <= 150) {
        bill = 50 * 0.50;
        units -= 50;
        bill += units * 0.75;
    } else if (units <= 250) {
        bill = 50 * 0.50 + 100 * 0.75;
        units -= 150;
        bill += units * 1.20;
    } else {
        bill = 50 * 0.50 + 100 * 0.75 + 100 * 1.20;
        units -= 250;
        bill += units * 1.50;
    }

    
    bill += bill / 5;

    printf("Total Bill: %d\n", bill);

}
#include <stdio.h>


void main(){

printf("Question 1 =>\n");

int celcius;
printf("Enter the Temp in celcius =>\n");
scanf("%d", &celcius);

printf("The temperature in celcius is %d\n", celcius);  


float Farhenheit = (celcius*9/5) +32;
printf("So the temperature in Farhenheit is %.2f =>\n", Farhenheit);  
 
printf("\n");
printf("Question 2 =>\n");
int baseSalary = 100;
    float hraPercent = 10.0; 
    float daPercent = 8.0;   
    float taPercent = 5.0;   

   
    float hraAmount = (hraPercent / 100) * baseSalary;
    float daAmount = (daPercent / 100) * baseSalary;
    float taAmount = (taPercent / 100) * baseSalary;

    
    float grossSalary = baseSalary + hraAmount + daAmount + taAmount;

    printf("Base Salary: %d\n", baseSalary);
    printf("HRA Amount: %.2f\n", hraAmount);
    printf("DA Amount: %.2f\n", daAmount);
    printf("TA Amount: %.2f\n", taAmount);
    printf("Gross Salary: %.2f\n", grossSalary);

printf("\n");
printf("Question 3 =>\n");    

int firstAngle = 45;
int secondAngle = 65;

 printf("first Angle: %d\n", firstAngle);
 printf("second Angle: %d\n", secondAngle);

 int thirdAngle = 180-(firstAngle+secondAngle);
 printf("so the third Angle is: %d\n", thirdAngle);
    
}
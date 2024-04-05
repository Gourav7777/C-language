#include <stdio.h>
#define PI 3.14
main(){

printf("Question 1 \n");
   
     int a=12, b=6,c ,d,e,f,g;
     c = a+b;
     printf("Addition of 12 and 6 is ");
     printf("%d\n", c );
     
     d = a-b;
     printf("Subtraction of 12 and 6 is ");
     printf("%d\n", d );
    
     e = a*b;
     printf("Multiplication of 12 and 6 is ");
     printf("%d\n", e );

     f = a/b;
     printf("Division of 12 and 6 is ");
     printf("%d\n", f);

     g = a%b;
     printf("Modulo of 12 and 6 is ");
     printf("%d\n", g);

     printf("\n");


printf("Question 2 \n");

    int radius = 7, length = 6, breadth = 5, base = 7, height = 5, principle = 1000;
    float area, perimeter, rectarea, triarea  , interest, time=5, rate=7;

    area = PI * radius * radius;
    perimeter = 2 * PI * radius;
    rectarea = length * breadth;
    triarea = 1.0 / 2 * base * height;
    interest = (principle * rate * time) / 100;

    printf("The area of the circle with radius %d is %.2f\n", radius, area);
    printf("The area of the rectangle with length %d and breadth %d is %.2f \n", length, breadth, rectarea);
    printf("The area of the triangle with base %d and height %d is %.2f  \n", base, height, triarea);
    printf("The interest  with principle %d rate %.2f and time %.2f is %.2f \n", principle, rate, time, interest);
    printf("The Perimeter of the circle with radius %d is %.2f\n", radius, perimeter);

}
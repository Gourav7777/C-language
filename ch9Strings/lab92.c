#include <stdio.h>
#include <string.h>
#include <stdbool.h>>
main(){

 printf("Question 1 =>\n");

  char str [100] ;
   
   printf("Enter your password =>\n");
   scanf("%s", &str);

   int strlength = strlen(str);
   
  
 bool hasLetter = false;
    bool hasDigit = false;
    bool hasSymbol = false;

    for (int i = 0; i < strlength; i++) {
       
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            hasLetter = true;
        }
      
        else if (str[i] >= '0' && str[i] <= '9') {
            hasDigit = true;
        }
     
        else {
            hasSymbol = true;
        }
    }

    if (strlength < 6) {
        printf("Your Password is weak (less than 6 characters)\n");
    } else if (!(hasDigit && hasLetter && hasSymbol)) {
        printf("Your Password is weak (missing one or more required characters)\n");
    } else {
        printf("Your Password is strong\n");
    }

    
       

    



 printf("\n");

 printf("Question 2 =>\n");
 char e[] = "admin@gmail.com";
 char p[] = "123456";
 
 char x [50];
char y [50];
 printf("Enter your email =>\n");
    scanf("%s", &x);
 printf("Enter your password =>\n");
   scanf("%s", &y);
 
 

// printf("%s",x);
// printf("%s",y);

  if (strcmp(x, e) == 0 && strcmp(y, p) == 0) {
        printf("Login successful!\n");
    } else {
        printf("Login failed! Incorrect email or password.\n");
    }


 
}
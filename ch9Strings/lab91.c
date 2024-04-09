#include <stdio.h>

main(){

 printf("Question 1 =>\n");

  char str [] = "hello world";
  
  for (int i = 0; str[i] != '\0'; i++) {
        
        if (str[i] >= 'a' && str[i] <= 'z') {
           
            str[i] = str[i] - ('a' - 'A');
        }
    
       

    }

    printf("Uppercase string: %s\n", str);

 printf("\n");

 printf("Question 2 =>\n");

 char string[]  = "HELLO WORLD";
  
  for (int i = 0; string[i] != '\0'; i++) {
        
        if (string[i] >= 'A' && string[i] <= 'Z') {
           
            string[i] = string[i] + ('a' - 'A');
        }
    
       

    }

    printf("Uppercase string: %s\n", string);


 printf("\n");

 printf("Question 3 =>\n");

 char s[]  = "HelLo worLD";
  
  for (int i = 0; s[i] != '\0'; i++) {
        
        if (s[i] >= 'A' && s[i] <= 'Z') {
           
            s[i] = s[i] + ('a' - 'A');
        }
       
       else if(s[i] >= 'a' && s[i] <= 'z'){
           s[i] = s[i] - ('a' - 'A');
       }
       

    }

    printf("Togglecase string: %s\n", s);

}
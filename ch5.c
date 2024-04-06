#include <stdio.h>

main(){


    printf("Question 1 \n");

    int a =8, b=3;

     if(a>b){
      printf("The minimumm value is %d\n", b);
     }
     else{
       printf("The minimumm value is %d\n", a);
     }

     printf("Question 2 \nEnter any number to proceed\n");

     int c;
     scanf("%d",&c);
      
    if(c>0){
      printf("The number %d is positive\n", c);
     }
     else if(c==0){
      printf("The number is neutral\n");
     }
     else{
       printf("The number is negative\n");
     }
    printf("\n");
    printf("\n");
    printf("Question lab work 5.2 => \n");
     int num1 = 8, num2 =12, num3=3, num4=7;

      if (num1 >= num2) {
        if (num1 >= num3) {
            if (num1 >= num4) {
                printf("%d is the greatest.\n", num1);
            } else {
                printf("%d is the greatest.\n", num4);
            }
        } else {
            if (num3 >= num4) {
                printf("%d is the greatest.\n", num3);
            } else {
                printf("%d is the greatest.\n", num4);
            }
        }
    } else {
        if (num2 >= num3) {
            if (num2 >= num4) {
                printf("%d is the greatest.\n", num2);
            } else {
                printf("%d is the greatest.\n", num4);
            }
        } else {
            if (num3 >= num4) {
                printf("%d is the greatest.\n", num3);
            } else {
                printf("%d is the greatest.\n", num4);
            }
        }
    }
   
    printf("\n");
    printf("\n");
    printf("Question lab work 5.3 => \n");

     printf("Question 1\n");
     (num1>num2)?
       ( (num1>num3)? printf("num1 is greater\n"): printf("num3 is greater\n")   ):
       ((num2>num3)?printf("num2 is greater\n"):printf("num3 is greater\n"));

       printf("Question 2  program for switch case\n");
        int z, y,h,j;
         printf("Press 1 for English\n");
         printf("Press 2 for Hindi\n");
         printf("Press 3 for Gujarati\n");
         printf("Enter your choice -> ");
         scanf("%d" , &z);

         switch (z)
         {
         case 1 :
            printf("Press 1 for Interet Recharge\n");
            printf("Press 2 for Top up Recharge\n");
            printf("Press 3 for Special recharge\n");
            printf("Enter your choice -> ");
               scanf("%d" , &y);
               
               switch (y)
               {
                 case 1 :
                 printf("You have successfullly done a Internet Recharge\n");
                 break;
                 case 2 :
                 printf("You have successfullly done a Top up Recharge\n");
                 break;
                 case 3 :
                 printf("You have successfullly done a special Recharge\n");
                break;
               
               default:
                break;
               }


            break;


         case 2 :
            printf("Interet Recharge ke liye 1 dabayei\n");
            printf("Top up Recharge ke liye 2 dabayei\n");
            printf("Special recharge ke liye 3 dabayei\n");
            printf("Enter your choice -> ");
               scanf("%d" , &h);
               
               switch (h)
               {
                 case 1 :
                 printf("Aaapne sahi se Internet Recharge kar liya hai\n");
                 break;
                 case 2 :
                 printf("Aaapne sahi se Top up Recharge kar liya hai\n");
                 break;
                 case 3 :
                 printf("Aaapne sahi se Special Recharge kar liya hai\n");
                break;
               
               default:
                break;
               }


            break;

         case 3 :
            printf("Interet Recharge maate 1 dabao\n");
            printf("Top up Recharge maate 2 dabao\n");
            printf("Special recharge maate 3 dabao\n");
            printf("Enter your choice -> ");
               scanf("%d" , &j);
               
               switch (j)
               {
                 case 1 :
                 printf("Taame safltapurvak Internet Recharge karyuv chhe\n");
                 break;
                 case 2 :
                 printf("Taame safltapurvak Top up Recharge karyuv chhe\n");
                 break;
                 case 3 :
                 printf("Taame safltapurvak Special Recharge karyuv chhe\n");
                break;
               
               default:
                break;
               }


            break;


         default:
            break;
         }
}
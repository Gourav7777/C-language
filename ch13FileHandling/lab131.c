#include <stdio.h>

void main() {
    printf("Question 1 =>\n");
    FILE *sourceFile, *destinationFile;
    char data[1000];
  
  
    sourceFile = fopen("src.txt", "r");
    destinationFile = fopen("dstn.txt", "w");
    if (sourceFile == NULL) {
        printf("Could not open source file");
        return;
    }
    else {
        printf("Source file opened successfully.\n");
        
        if (destinationFile == NULL) {
            printf("Could not open destination file");
            fclose(sourceFile); 
            return;
        }
        else {
            printf("Destination file opened successfully.\n");
            
            
          
            while (fgets(data, 40, sourceFile) != NULL) {
                fputs(data, destinationFile);
            }

            printf("Data copied successfully from source to destination.\n");
            
            
            fclose(sourceFile);
            fclose(destinationFile);
        }
    }



     printf("\n");
     printf("Question 2 =>\n");

     FILE *file;
    int num;

    file = fopen("divisible.txt", "w");
    if (file == NULL) {
        printf("Unable to create or open file.");
        return;
    }

   
    for (num = 1; num <= 50; num++) {
        if (num % 3 == 0 && num % 5 == 0) {
            fprintf(file, "%d\n", num);
        }
    }

    
    fclose(file);

    printf("Numbers divisible by both 3 and 5 between 1 and 50 are written to the file.\n");
}
#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    int chemMarks;
    int mathsMarks;
    int phyMarks;
};

void main() {
    printf("Question 1 =>\n");
     FILE *evenFile, *oddFile;
    int num;

    
    evenFile = fopen("even.txt", "w");
    if (evenFile == NULL) {
        printf("Unable to create or open evenfile.txt.");
        return;
    }

    
    oddFile = fopen("odd.txt", "w");
    if (oddFile == NULL) {
        printf("Unable to create or open oddfile.txt.");
        fclose(evenFile); 
      return;
    }

   
    for (num = 50; num <= 70; num++) {
        if (num % 2 == 0) {
            fprintf(evenFile, "%d, ", num);
        } else {
            fprintf(oddFile, "%d, ", num);
        }
    }

 
    fclose(evenFile);
    fclose(oddFile);

    printf("Even and odd numbers from 50 to 70 are written to separate files.\n");



     printf("\n");
     printf("Question 2 =>\n");
   

    struct Student students[5];
    int i;

    
    for (i = 0; i < 5; i++) {
        printf("Enter details of Student %d:\n", i + 1);
        printf("Roll no => ");
        scanf("%d", &students[i].rollNo);
        printf("Name => ");
        scanf("%s", students[i].name);
        printf("Chemistry => ");
        scanf("%d", &students[i].chemMarks);
        printf("Mathematics => ");
        scanf("%d", &students[i].mathsMarks);
        printf("Physics => ");
        scanf("%d", &students[i].phyMarks);
        printf("\n");
    }

    for (i = 0; i < 5; i++) {
        printf("%s (%d)\n", students[i].name, students[i].rollNo);
        printf("Chemistry => %d\n", students[i].chemMarks);
        printf("Mathematics => %d\n", students[i].mathsMarks);
        printf("Physics => %d\n", students[i].phyMarks);
        
      
        int totalMarks = students[i].chemMarks + students[i].mathsMarks + students[i].phyMarks;
        float percentage = (float)totalMarks / 300 * 100;

        printf("Total => %d/300\n", totalMarks);
        printf("Percent => %.2f%%\n", percentage);
        printf("\n");
    }
}
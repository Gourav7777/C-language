#include <stdio.h>
#include <string.h>

 struct Students
 {
    int id;
    int age;
    char name[20];
    int physicsMarks;
    int scienceMarks;
    int mathsMarks;
    
 };

void addStudent(struct Students students[], int *count) {
    if (*count < 10) { 
        printf("Enter details for student %d:\n", *count + 1);
        printf("ID: ");
        scanf("%d", &students[*count].id);
        printf("Age: ");
        scanf("%d", &students[*count].age);
        printf("Name: ");
        scanf("%s", students[*count].name);
        printf("Physics Marks: ");
        scanf("%d", &students[*count].physicsMarks);
        printf("Science Marks: ");
        scanf("%d", &students[*count].scienceMarks);
        printf("Maths Marks: ");
        scanf("%d", &students[*count].mathsMarks);

        (*count)++; 
    } else {
        printf("Maximum number of student records reached.\n");
    }
}


void displayAllStudents(const struct Students students[], int count) {
    printf("\nStudent Records:\n");
    for (int i = 0; i < count; i++) {
        printf("Student %d:\n", i + 1);
        printf("ID: %d\n", students[i].id);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Physics Marks: %d\n", students[i].physicsMarks);
        printf("Science Marks: %d\n", students[i].scienceMarks);
        printf("Maths Marks: %d\n", students[i].mathsMarks);
    }
}

void searchStudentByID(const struct Students students[], int count, int id) {
    int found = 0;
    for (int i = 0; i < count; i++) {
        if (students[i].id == id) {
            printf("Student found:\n");
            printf("ID: %d\n", students[i].id);
            printf("Name: %s\n", students[i].name);
            printf("Age: %d\n", students[i].age);
            printf("Physics Marks: %d\n", students[i].physicsMarks);
            printf("Science Marks: %d\n", students[i].scienceMarks);
            printf("Maths Marks: %d\n", students[i].mathsMarks);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Student with ID %d not found.\n", id);
    }
}


void updateStudentByID(struct Students students[], int count, int id) {
    for (int i = 0; i < count; i++) {
        if (students[i].id == id) {
            printf("Enter new details for student with ID %d:\n", id);
            printf("Age: ");
            scanf("%d", &students[i].age);
            printf("Name: ");
            scanf("%s", students[i].name);
            printf("Physics Marks: ");
            scanf("%d", &students[i].physicsMarks);
            printf("Science Marks: ");
            scanf("%d", &students[i].scienceMarks);
            printf("Maths Marks: ");
            scanf("%d", &students[i].mathsMarks);
            printf("Details updated successfully for student with ID %d.\n", id);
            return;
        }
    }
    printf("Student with ID %d not found.\n", id);
}


void calculateAverageMarks(const struct Students students[], int count) {
    if (count == 0) {
        printf("No student records available.\n");
        return;
    }

    printf("Average Marks of all students:\n");
    for (int i = 0; i < count; i++) {
        int totalMarks = students[i].physicsMarks + students[i].scienceMarks + students[i].mathsMarks;
        int averageMarks = totalMarks / 3;
        printf("Student %d: %d\n", i + 1, averageMarks);
    }
}
 int main()
{
    struct Students students[10];
    int count = 0;

    // Data input loop
    for (int i = 0; i < 1; i++)
    {
        printf("Enter details for student %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &students[i].id);
        printf("Age: ");
        scanf("%d", &students[i].age);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Physics Marks: ");
        scanf("%d", &students[i].physicsMarks);
        printf("Science Marks: ");
        scanf("%d", &students[i].scienceMarks);
        printf("Maths Marks: ");
        scanf("%d", &students[i].mathsMarks);
        count++;
    }

    char choice;
    do
    {
        printf("\nMenu:\n");
        printf("a. Add new student record\n");
        printf("b. Display all student records\n");
        printf("c. Search student by ID\n");
        printf("d. Update student details by ID\n");
        printf("f. Calculate and display average marks of all students\n");
        printf("q. Quit\n");
        printf("Enter your choice: ");

        scanf(" %c", &choice);

        switch (choice)
        {
        case 'a':
            addStudent(students, &count);
            break;
        case 'b':
            displayAllStudents(students, count);
            break;
        case 'c':
            if (count > 0)
            {
                int id;
                printf("Enter student ID to search: ");
                scanf("%d", &id);
                searchStudentByID(students, count, id);
            }
            else
            {
                printf("No student records available.\n");
            }
            break;
        case 'd':
            if (count > 0)
            {
                int id;
                printf("Enter student ID to update: ");
                scanf("%d", &id);
                updateStudentByID(students, count, id);
            }
            else
            {
                printf("No student records available.\n");
            }
            break;
        case 'f':
            calculateAverageMarks(students, count);
            break;
        case 'q':
            printf("Exiting program.\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 'q');

    return 0;
}
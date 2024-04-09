#include <stdio.h>
#include <string.h>

 struct Students
 {
    int id;
    int age;
    char name[20];
    char course[20];
    char city[10];
    int stndrd;
    char school[20];
 }s1,s2,s3;

 struct Employees
 {
    int id;
    int age;
    char name[20];
    char city[10];
    char role[20];
    int exp;
    char company[30];
 } employees[3] ;
 
 
void main(){

printf("Question 1 =>\n");

  
    printf("Enter details for student 1:\n");
    printf("ID: ");
    scanf("%d", &s1.id);
    printf("Age: ");
    scanf("%d", &s1.age);
    printf("Name: ");
    scanf("%s", s1.name);
    printf("Course: ");
    scanf("%s", s1.course);
    printf("City: ");
    scanf("%s", s1.city);
    printf("Standard: ");
    scanf("%d", &s1.stndrd);
    printf("School: ");
    scanf("%s", s1.school);

  
    printf("Enter details for student 2:\n");
    printf("ID: ");
    scanf("%d", &s2.id);
    printf("Age: ");
    scanf("%d", &s2.age);
    printf("Name: ");
    scanf("%s", s2.name);
    printf("Course: ");
    scanf("%s", s2.course);
    printf("City: ");
    scanf("%s", s2.city);
    printf("Standard: ");
    scanf("%d", &s2.stndrd);
    printf("School: ");
    scanf("%s", s2.school);

 
    printf("Enter details for student 3:\n");
    printf("ID: ");
    scanf("%d", &s3.id);
    printf("Age: ");
    scanf("%d", &s3.age);
    printf("Name: ");
    scanf("%s", s3.name);
    printf("Course: ");
    scanf("%s", s3.course);
    printf("City: ");
    scanf("%s", s3.city);
    printf("Standard: ");
    scanf("%d", &s3.stndrd);
    printf("School: ");
    scanf("%s", s3.school);

   
    printf("\nDetails of all students:\n");
    printf("Student 1:\n");
    printf("ID: %d\n", s1.id);
    printf("Age: %d\n", s1.age);
    printf("Name: %s\n", s1.name);
    printf("Course: %s\n", s1.course);
    printf("City: %s\n", s1.city);
    printf("Standard: %d\n", s1.stndrd);
    printf("School: %s\n", s1.school);

    printf("Student 2:\n");
    printf("ID: %d\n", s2.id);
    printf("Age: %d\n", s2.age);
    printf("Name: %s\n", s2.name);
    printf("Course: %s\n", s2.course);
    printf("City: %s\n", s2.city);
    printf("Standard: %d\n", s2.stndrd);
    printf("School: %s\n", s2.school);

    printf("Student 3:\n");
    printf("ID: %d\n", s3.id);
    printf("Age: %d\n", s3.age);
    printf("Name: %s\n", s3.name);
    printf("Course: %s\n", s3.course);
    printf("City: %s\n", s3.city);
    printf("Standard: %d\n", s3.stndrd);
    printf("School: %s\n", s3.school);
 
printf("\n");
printf("Question 2 =>\n");


 for (int i = 0; i < 3; i++) {
        printf("Enter details for employee %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &employees[i].id);
        printf("Age: ");
        scanf("%d", &employees[i].age);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("City: ");
        scanf("%s", employees[i].city);
        printf("Role: ");
        scanf("%s", employees[i].role);
        printf("Experience: ");
        scanf("%d", &employees[i].exp);
        printf("Company: ");
        scanf("%s", employees[i].company);
    }

   
    printf("\nDetails of all employees:\n");
    for (int i = 0; i < 3; i++) {
        printf("Employee %d:\n", i + 1);
        printf("ID: %d\n", employees[i].id);
        printf("Age: %d\n", employees[i].age);
        printf("Name: %s\n", employees[i].name);
        printf("City: %s\n", employees[i].city);
        printf("Role: %s\n", employees[i].role);
        printf("Experience: %d\n", employees[i].exp);
        printf("Company: %s\n", employees[i].company);
    }

    
}
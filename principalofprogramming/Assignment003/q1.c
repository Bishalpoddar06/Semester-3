/*
1. Student Records Management Create a program to store student records (name, roll number, marks) in a file.
Provide options to: Add a new record Display all records Search for a student by roll number Update marks of a student
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
    char name[50];
    int roll;
    float marks;
};

void addRecord()
{
    struct Student s;
    FILE *fp = fopen("students.txt", "a");
    if (fp == NULL)
    {
        printf("File error!\n");
        return;
    }
    printf("Enter name: ");
    scanf("%s", s.name);
    printf("Enter roll number: ");
    scanf("%d", &s.roll);
    printf("Enter marks: ");
    scanf("%f", &s.marks);

    fprintf(fp, "%s %d %.2f\n", s.name, s.roll, s.marks);
    fclose(fp);
}

void displayRecords()
{
    struct Student s;
    FILE *fp = fopen("students.txt", "r");
    if (fp == NULL)
    {
        printf("No records found!\n");
        return;
    }
    printf("\n--- All Records ---\n");
    while (fscanf(fp, "%s %d %f", s.name, &s.roll, &s.marks) != EOF)
    {
        printf("Name: %s | Roll: %d | Marks: %.2f\n", s.name, s.roll, s.marks);
    }
    fclose(fp);
}

void searchRecord()
{
    int roll, found = 0;
    struct Student s;
    FILE *fp = fopen("students.txt", "r");
    if (fp == NULL)
    {
        printf("No records found!\n");
        return;
    }
    printf("Enter roll number to search: ");
    scanf("%d", &roll);

    while (fscanf(fp, "%s %d %f", s.name, &s.roll, &s.marks) != EOF)
    {
        if (s.roll == roll)
        {
            printf("Found -> Name: %s | Roll: %d | Marks: %.2f\n", s.name, s.roll, s.marks);
            found = 1;
            break;
        }
    }
    if (!found)
        printf("Record not found!\n");
    fclose(fp);
}

void updateMarks()
{
    int roll, found = 0;
    float newMarks;
    struct Student s;
    FILE *fp = fopen("students.txt", "r");
    FILE *temp = fopen("temp.txt", "w");
    if (fp == NULL)
    {
        printf("No records found!\n");
        return;
    }
    printf("Enter roll number to update marks: ");
    scanf("%d", &roll);
    printf("Enter new marks: ");
    scanf("%f", &newMarks);

    while (fscanf(fp, "%s %d %f", s.name, &s.roll, &s.marks) != EOF)
    {
        if (s.roll == roll)
        {
            s.marks = newMarks;
            found = 1;
        }
        fprintf(temp, "%s %d %.2f\n", s.name, s.roll, s.marks);
    }
    fclose(fp);
    fclose(temp);

    remove("students.txt");
    rename("temp.txt", "students.txt");

    if (found)
        printf("Marks updated!\n");
    else
        printf("Record not found!\n");
}

int main()
{
    int choice;
    do
    {
        printf("\n1. Add Record\n2. Display Records\n3. Search Record\n4. Update Marks\n5. Exit\nEnter choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            addRecord();
            break;
        case 2:
            displayRecords();
            break;
        case 3:
            searchRecord();
            break;
        case 4:
            updateMarks();
            break;
        case 5:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice!\n");
        }
    } while (choice != 5);
    return 0;
}

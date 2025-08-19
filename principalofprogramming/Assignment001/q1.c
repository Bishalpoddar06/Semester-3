/*
Write a C program to store and display information about a list of courses, where each course has a subject name and corresponding marks.
The number of courses should be taken as input from the user. Dynamically allocate memory for storing the records using malloc.
 Accept subject name and marks for each record from the user. Display the stored information. Finally, release the allocated memory using free.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LEN 100

typedef struct
{
    char subject[MAX_NAME_LEN];
    int marks;
} Course;

int main()
{
    int n, i;
    Course *courses;

    printf("Enter the number of courses: ");
    scanf("%d", &n);

    courses = (Course *)malloc(n * sizeof(Course));
    if (courses == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        printf("Enter subject name for course %d: ", i + 1);
        scanf(" ");
        fgets(courses[i].subject, MAX_NAME_LEN, stdin);

        size_t len = strlen(courses[i].subject);
        if (len > 0 && courses[i].subject[len - 1] == '\n')
        {
            courses[i].subject[len - 1] = '\0';
        }
        printf("Enter marks for %s: ", courses[i].subject);
        scanf("%d", &courses[i].marks);
    }

    printf("\nStored Course Information:\n");
    for (i = 0; i < n; i++)
    {
        printf("Course %d: Subject: %s, Marks: %d\n", i + 1, courses[i].subject, courses[i].marks);
    }

    free(courses);
    return 0;
}

/*
------OUTPUT------
Enter the number of courses: 3
Enter subject name for course 1: Mathematics
Enter marks for Mathematics: 85
Enter subject name for course 2: Physics
Enter marks for Physics: 90
Enter subject name for course 3: Chemistry
Enter marks for Chemistry: 88
Stored Course Information:
Course 1: Subject: Mathematics, Marks: 85
Course 2: Subject: Physics, Marks: 90
Course 3: Subject: Chemistry, Marks: 88 
*/

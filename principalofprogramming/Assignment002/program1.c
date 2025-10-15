/*
Write a C program to store and display information about a list of courses,
where each course has a subject name and corresponding marks. The number of
courses should be taken as input from the user. Dynamically allocate memory for
storing the records using malloc. Accept subject name and marks for each record
from the user. Display the stored information. Finally, release the allocated
memory using free.
*/

#include <stdio.h>
#include <stdlib.h>

struct Course {
    char name[50];
    double marks;
};

int main() {
    int n;

    printf("Enter number of courses : ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid number of courses. Please enter a positive number.\n");
        return 1;
    }

    struct Course *courses = (struct Course *)malloc(n * sizeof(struct Course));

    if (courses == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter details of the courses one by one...\n");

    for (int i = 0; i < n; i++) {
        printf("For course %d...\n", i + 1);
        printf("Course name: ");
        scanf("%s", courses[i].name);
        printf("Marks: ");
        scanf("%lf", &courses[i].marks);
    }

    printf("\nDISPLAYING THE DATA...\n");

    for (int i = 0; i < n; i++) {
        printf("For course %d...\n", i + 1);
        printf("Course name: %s\n", courses[i].name);
        printf("Marks: %.2lf\n", courses[i].marks);
    }

    free(courses);

    return 0;
}

/* OUTPUT
Enter number of courses : 3
Enter details of the courses one by one...
For course 1...
Course name: CSE
Marks: 80
For course 2...
Course name: Science
Marks: 70
For course 3...
Course name: Maths
Marks: 70

DISPLAYING THE DATA...
For course 1...
Course name: CSE
Marks: 80.00
For course 2...
Course name: Science
Marks: 70.00
For course 3...
Course name: Maths
Marks: 70.00
*/
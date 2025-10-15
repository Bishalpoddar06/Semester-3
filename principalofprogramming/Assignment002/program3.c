// Write a program where a function updates the salary of an employee using a
// pointer to structure.

#include <stdio.h>
#include <stdlib.h>

struct Employee {
    int id;
    char name[50];
    double salary;
};

// Function to update employee salary using a pointer to structure
void updateSalary(struct Employee *emp, double incrementPerc) {
    emp->salary = emp->salary * (100 + incrementPerc) / 100;
}

int main() {
    int n;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct Employee *employees =
        (struct Employee *)malloc(n * sizeof(struct Employee));

    printf("Enter details of the employees...\n");
    for (int i = 0; i < n; i++) {
        printf("Employee no: %d\n", i + 1);
        printf("ID: ");
        scanf("%d", &employees[i].id);
        printf("Name: ");
        scanf(" %[^\n]", employees[i].name);
        printf("Salary: ");
        scanf("%lf", &employees[i].salary);
    }

    printf("\nDISPLAYING THE DATA...\n");

    for (int i = 0; i < n; i++) {
        printf("- Employee: %d -\n", i + 1);
        printf("ID: %d\n", employees[i].id);
        printf("Name: %s\n", employees[i].name);
        printf("Salary: %.2lf\n", employees[i].salary);
    }

    int ID, found = 0;
    printf("Enter ID to update salary: \n");
    scanf("%d", &ID);

    for (int i = 0; i < n; i++) {
        if (ID == employees[i].id) {
            found = 1;
            double incrementPerc;
            printf("Enter increment percentage: ");
            scanf("%lf", &incrementPerc);

            // Call the update function instead of updating directly
            updateSalary(&employees[i], incrementPerc);

            printf("Salary updated to : %.2lf\n", employees[i].salary);
        }
    }

    if (!found) {
        printf("Given ID not found!");
    }

    free(employees);

    return 0;
}

/* OUTPUT
Enter number of employees: 3
Enter details of the employees...
Employee no: 1
ID: 100
Name: Employee1
Salary: 40000
Employee no: 2
ID: 101
Name: Employee2
Salary: 50000
Employee no: 3
ID: 102
Name: Employee3
Salary: 60000

DISPLAYING THE DATA...
- Employee: 1 -
ID: 100
Name: Employee1
Salary: 40000.00
- Employee: 2 -
ID: 101
Name: Employee2
Salary: 50000.00
- Employee: 3 -
ID: 102
Name: Employee3
Salary: 60000.00
Enter ID to update salary:
101
Enter increment percentage: 15
Salary updated to : 57500.00
*/
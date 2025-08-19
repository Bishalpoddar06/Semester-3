/*Write a program where a function updates the salary of an employee using a pointer to structure.*/
#include <stdio.h>


struct Employee {
    char name[50];
    float salary;
};


void updateSalary(struct Employee *emp, float newSalary) {
    emp->salary = newSalary;  
}

int main() {
    struct Employee emp1 = {"John Doe", 30000.0};

    printf("Before update:\n");
    printf("Name: %s\n", emp1.name);
    printf("Salary: %.2f\n", emp1.salary);


    updateSalary(&emp1, 45000.0);

    printf("\nAfter update:\n");
    printf("Name: %s\n", emp1.name);
    printf("Salary: %.2f\n", emp1.salary);

    return 0;
}
/*
------OUTPUT------  
Before update:
Name: John Doe
Salary: 30000.00

After update:
Name: John Doe
Salary: 45000.00
*/
/*
Write a program to store details of 3 books using an array of structures and a pointer.
*/

#include <stdio.h>

struct Book
{
    char title[50];
    char author[50];
    float price;
};

int main()
{
    struct Book books[3];
    struct Book *ptr;
    ptr = books;

    printf("Enter details of 3 books:\n");

    for (int i = 0; i < 3; i++)
    {
        printf("\nBook %d:\n", i + 1);
        printf("Enter title: ");
        scanf(" %[^\n]s", (ptr + i)->title);
        printf("Enter author: ");
        scanf(" %[^\n]s", (ptr + i)->author);
        printf("Enter price: ");
        scanf("%f", &(ptr + i)->price);
    }

    printf("\nDetails of 3 books:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("\nBook %d:\n", i + 1);
        printf("Title : %s\n", (ptr + i)->title);
        printf("Author: %s\n", (ptr + i)->author);
        printf("Price : %.2f\n", (ptr + i)->price);
    }

    return 0;
}

/*
------OUTPUT------
Enter details of 3 books:

Book 1:
Enter title: INSIDIOUS
Enter author: PERSON 1
Enter price: 400

Book 2:
Enter title: FINAL DESTINATION
Enter author: PERSON 2
Enter price: 700

Book 3:
Enter title: TOGETHER
Enter author: PERSON 3
Enter price: 450

Details of 3 books:

Book 1:
Title : INSIDIOUS
Author: PERSON 1
Price : 400.00

Book 2:
Title : FINAL DESTINATION
Author: PERSON 2
Price : 700.00

Book 3:
Title : TOGETHER
Author: PERSON 3
Price : 450.00
*/
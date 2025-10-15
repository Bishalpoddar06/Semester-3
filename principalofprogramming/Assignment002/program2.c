// Write a program to store details of 3 books using an array of structures and
// a pointer.

#include <stdio.h>
#include <stdlib.h>

struct Book {
    char title[100];
    char author[100];
    int pages;
};

int main() {
    int n = 3;

    struct Book *books = (struct Book *)malloc(n * sizeof(struct Book));

    if (books == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter details of three books...\n");

    for (int i = 0; i < n; i++) {
        printf("For book no: %d...\n", i + 1);
        printf("Title: ");
        scanf(" %[^\n]", books[i].title);
        printf("Author: ");
        scanf(" %[^\n]", books[i].author);
        printf("Pages: ");
        scanf("%d", &books[i].pages);
    }

    printf("\nDISPLAYING THE DATA...\n");
    for (int i = 0; i < n; i++) {
        printf("Book - %d\n", i + 1);
        printf("Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Pages: %d\n", books[i].pages);
    }

    free(books);

    return 0;
}

/*
Enter details of three books...
For book no: 1...
Title: Title1
Author: Author1
Pages: 100
For book no: 2...
Title: Title2
Author: Author2
Pages: 150
For book no: 3...
Title: Title3
Author: Author3
Pages: 200

DISPLAYING THE DATA...
Book - 1
Title: Title1
Author: Author1
Pages: 100
Book - 2
Title: Title2
Author: Author2
Pages: 150
Book - 3
Title: Title3
Author: Author3
Pages: 200
*/
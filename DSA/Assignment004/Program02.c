/*
WAP to 2 polynomials as input and perform the following operations-
a. Addition
b. Subtraction
c. Multiplication
*/

#include <stdio.h>


void printPoly(int poly[], int degree) {
    for (int i = degree; i >= 0; i--) {
        if (poly[i] != 0) {
            if (i != degree && poly[i] > 0) printf(" + ");
            if (i == 0) 
                printf("%d", poly[i]);
            else if (i == 1) 
                printf("%dx", poly[i]);
            else 
                printf("%dx^%d", poly[i], i);
        }
    }
    printf("\n");
}

int main() {
    int deg1, deg2;

    
    printf("Enter degree of first polynomial: ");
    scanf("%d", &deg1);
    int poly1[deg1+1];
    
    printf("Enter coefficients of first polynomial (from highest to constant):\n");
    for (int i = deg1; i >= 0; i--) {
        printf("Coefficient of x^%d: ", i);
        scanf("%d", &poly1[i]);
    }

    printf("Enter degree of second polynomial: ");
    scanf("%d", &deg2);
    int poly2[deg2+1];
    
    printf("Enter coefficients of second polynomial (from highest to constant):\n");
    for (int i = deg2; i >= 0; i--) {
        printf("Coefficient of x^%d: ", i);
        scanf("%d", &poly2[i]);
    }

   
    int maxDeg = (deg1 > deg2) ? deg1 : deg2;
    int sum[maxDeg+1];

    for (int i = 0; i <= maxDeg; i++) {
        int a = (i <= deg1) ? poly1[i] : 0;
        int b = (i <= deg2) ? poly2[i] : 0;
        sum[i] = a + b;
    }

   
    int diff[maxDeg+1];
    for (int i = 0; i <= maxDeg; i++) {
        int a = (i <= deg1) ? poly1[i] : 0;
        int b = (i <= deg2) ? poly2[i] : 0;
        diff[i] = a - b;
    }

    int prod[deg1+deg2+1];
    for (int i = 0; i <= deg1+deg2; i++) prod[i] = 0;  

    for (int i = 0; i <= deg1; i++) {
        for (int j = 0; j <= deg2; j++) {
            prod[i+j] += poly1[i] * poly2[j];
        }
    }

    // ---------------- Print Results ----------------
    printf("\nFirst Polynomial: ");
    printPoly(poly1, deg1);

    printf("Second Polynomial: ");
    printPoly(poly2, deg2);

    printf("\nSum: ");
    printPoly(sum, maxDeg);

    printf("Difference (Poly1 - Poly2): ");
    printPoly(diff, maxDeg);

    printf("Product: ");
    printPoly(prod, deg1+deg2);

    return 0;
}
/*
---OUTPUT---
Enter degree of first polynomial: 2
Enter coefficients of first polynomial (from highest to constant):
Coefficient of x^2: 4
Coefficient of x^1: 3
Coefficient of x^0: 2
Enter degree of second polynomial: 1
Enter coefficients of second polynomial (from highest to constant):
Coefficient of x^1: 4
Coefficient of x^0: 5

First Polynomial: 4x^2 + 3x + 2
Second Polynomial: 4x + 5

Sum: 4x^2 + 7x + 7
Difference (Poly1 - Poly2): 4x^2-1x-3
Product: 16x^3 + 32x^2 + 23x + 10
*/

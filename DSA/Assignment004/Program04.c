/*
Take 1 polynomial and differentiate it.
*/
#include <stdio.h>

// Function to print polynomial
void printPoly(float poly[], int degree) {
    for (int i = degree; i >= 0; i--) {
        if (poly[i] != 0) {
            if (i != degree) {
                if (poly[i] > 0) printf(" + ");
                else printf(" - ");
            } else if (poly[i] < 0) {
                printf("-");
            }

            float val = (poly[i] > 0) ? poly[i] : -poly[i];
            if (i == 0) 
                printf("%.2f", val);   // constant term
            else if (i == 1) 
                printf("%.2fx", val); // x term
            else 
                printf("%.2fx^%d", val, i);
        }
    }
    printf("\n");
}

int main() {
    int degree;

    // Input degree
    printf("Enter the degree of the polynomial: ");
    scanf("%d", &degree);

    float coeff[degree+1];
    printf("Enter coefficients of polynomial (from highest degree to constant):\n");
    for (int i = degree; i >= 0; i--) {
        printf("Coefficient of x^%d: ", i);
        scanf("%f", &coeff[i]);
    }

    // ---------------- Differentiation ----------------
    float deriv[degree];  // degree decreases by 1 after differentiation
    for (int i = 0; i < degree; i++) deriv[i] = 0; // init

    for (int i = 1; i <= degree; i++) {
        deriv[i-1] = coeff[i] * i;
    }

    // ---------------- Print Results ----------------
    printf("\nOriginal Polynomial: ");
    printPoly(coeff, degree);

    printf("Differentiated Polynomial: ");
    if (degree == 0) 
        printf("0\n");  // derivative of constant is 0
    else 
        printPoly(deriv, degree-1);

    return 0;
}

/*
---OUTPUT---
Enter the degree of the polynomial: 2
Enter coefficients of polynomial (from highest degree to constant):
Coefficient of x^2: 3
Coefficient of x^1: 4
Coefficient of x^0: 2

Original Polynomial: 3.00x^2 + 4.00x + 2.00
Differentiated Polynomial: 6.00x + 4.00
*/
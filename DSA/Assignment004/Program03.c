/*
Take 1 polynomial as input and itegrate it.
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

    // ---------------- Integration ----------------
    float integ[degree+2]; // degree increases by 1 after integration
    for (int i = 0; i <= degree+1; i++) integ[i] = 0; // initialize

    for (int i = 0; i <= degree; i++) {
        integ[i+1] = coeff[i] / (i+1);
    }

    // ---------------- Print Results ----------------
    printf("\nOriginal Polynomial: ");
    printPoly(coeff, degree);

    printf("Integrated Polynomial (without +C): ");
    printPoly(integ, degree+1);

    return 0;
}
/*
---OUTPUT---
Enter the degree of the polynomial: 3
Enter coefficients of polynomial (from highest degree to constant):
Coefficient of x^3: 4
Coefficient of x^2: 5
Coefficient of x^1: 3
Coefficient of x^0: 2

Original Polynomial: 4.00x^3 + 5.00x^2 + 3.00x + 2.00
Integrated Polynomial (without +C): 1.00x^4 + 1.67x^3 + 1.50x^2 + 2.00x
*/

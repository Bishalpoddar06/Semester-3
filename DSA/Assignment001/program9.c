/*
Find the sum and product of all the elements of a given array.
*/

#include <stdio.h>

void calculate(int arr[], int n) {
    int sum = 0, mult = 1;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        mult *= arr[i];
    }
    printf("Summation of array elements : %d\n", sum);
    printf("Product of array elements : %d\n", mult);
}

int main() {
    int arr[] = {1, 2, -3, 4, -50};
    int n = sizeof(arr) / sizeof(int);

    calculate(arr, n);
}

/* OUTPUT
Summation of array elements : -46
Product of array elements : 1200
*/
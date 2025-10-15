// Basic Array Operations

#include <stdio.h>

void printArray(int arr[], int n) {
    printf("The Array Elements...\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void printMiddleElement(int arr[], int n) {
    printf("Middle Element : %d\n", arr[n / 2]);
}

void printOddIndices(int arr[], int n) {
    printf("The Odd Indexed Array Elements...\n");
    for (int i = 0; i < n; i += 2) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void printEvenIndices(int arr[], int n) {
    printf("The Odd Indexed Array Elements...\n");
    for (int i = 1; i < n; i += 2) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void printMappedElements(int arr[], int n, int multFactor) {
    printf("Mapped Elements for multFactor : %d\n", multFactor);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i] * multFactor);
    }
    printf("\n");
}

void printIndex(int arr[], int n, int position) {
    if (position >= 1 && position <= n) {
        printf("Element at (position : %d) => %d\n", position,
               arr[position - 1]);
    } else {
        printf("Position : %d invalid", position);
    }
}

void printNegativeNumbers(int arr[], int n) {
    int flag = 0;
    printf("Negative Numbers in Array...\n");
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            printf("%d ", arr[i]);
            flag = 1;
        }
    }
    if (flag == 0) {
        printf("null");
    }
    printf("\n");
}

void printReversedArray(int arr[], int n) {
    printf("Reversed Array...\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void search(int arr[], int n, int key) {
    int flag = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Element : %d, found at position : %d\n", arr[i], i + 1);
            flag = 1;
            break;
        }
    }
    if (flag == 0) {
        printf("Element : %d, Not Found\n", key);
    }
}

void summation(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    printf("Summation of array elements : %d\n", sum);
}

void printMaxMin(int arr[], int n) {
    int min = arr[0];
    int max = arr[0];

    for (int i = 0; i < n; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
        if (min > arr[i]) {
            min = arr[i];
        }
    }

    printf("Smallest Element : %d, Largest Element : %d\n", min, max);
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(int);

    int choice;
    printf("Menu:\n");
    printf("1. Print Array\n");
    printf("2. Print Middle Element\n");
    printf("3. Print Odd Indices\n");
    printf("4. Print Even Indices\n");
    printf("5. Print Mapped Elements (multFactor = 2)\n");
    printf("6. Print Element at Position 2\n");
    printf("7. Print Negative Numbers\n");
    printf("8. Print Reversed Array\n");
    printf("9. Search for -20\n");
    printf("10. Print Max and Min\n");
    printf("11. Summation\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printArray(arr, n);
            break;
        case 2:
            printMiddleElement(arr, n);
            break;
        case 3:
            printOddIndices(arr, n);
            break;
        case 4:
            printEvenIndices(arr, n);
            break;
        case 5:
            printMappedElements(arr, n, 2);
            break;
        case 6:
            printIndex(arr, n, 2);
            break;
        case 7:
            printNegativeNumbers(arr, n);
            break;
        case 8:
            printReversedArray(arr, n);
            break;
        case 9:
            search(arr, n, -20);
            break;
        case 10:
            printMaxMin(arr, n);
            break;
        case 11:
            summation(arr, n);
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
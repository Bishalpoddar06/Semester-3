/*
Decreasing Insertion sort(without array reversal)
*/

#include <stdio.h>

void insertionSortDesc(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] < key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array:\n");
    printArray(arr, n);

    insertionSortDesc(arr, n);

    printf("Sorted array in descending order:\n");
    printArray(arr, n);

    return 0;
}

/*
---OUTPUT---
Original array:
12 11 13 5 6 
Sorted array in descending order:
13 12 11 6 5 
*/
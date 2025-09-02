/*
⁠Decreasing bubble sort(without array reversal)
*/

#include <stdio.h>

void bubbleSortDesc(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {

            if (arr[j] < arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
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
    int arr[] = {5, 1, 4, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array:\n");
    printArray(arr, n);

    bubbleSortDesc(arr, n);

    printf("Sorted array in descending order:\n");
    printArray(arr, n);

    return 0;
}

/*
---OUTPUT---
Original array:
5 1 4 2 8 
Sorted array in descending order:
8 5 4 2 1 
*/
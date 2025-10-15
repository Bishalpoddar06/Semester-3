/*
WAP in C to perform bubble sort using a function where the comparison
function will be passed using a function pointer where the function
of comparison will return 1 for swap & -1 for no swap (give the sample out put
also)
*/

#include <stdio.h>

int compare(int a, int b) {
  return (a > b) ? 1 : -1;  // 1 for swap, -1 for no swap
}

void bubbleSort(int arr[], int n, int (*cmp)(int, int)) {
  int i, j, temp;
  for (i = n; i >= 0; i--) {
    for (j = 0; j < i; j++) {
      if (cmp(arr[j], arr[j + 1]) == 1) {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

int main() {
  int arr[100], n, i;
  printf("Enter number of elements: ");
  scanf("%d", &n);
  printf("Enter %d elements: ", n);
  for (i = 0; i < n; i++) scanf("%d", &arr[i]);

  bubbleSort(arr, n, compare);

  printf("Sorted array: ");
  for (i = 0; i < n; i++) printf("%d ", arr[i]);
  printf("\n");
  return 0;
}

/*
Sample Output:
Enter number of elements: 5
Enter 5 elements: 4 2 5 1 3
Sorted array: 1 2 3 4 5
*/
// Bubble Sort

#include <stdio.h>

void BubbleSort(int arr[], int n) {
  for (int i = n - 1; i >= 0; i--) {
    for (int j = 0; j < i; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

void input(int arr[], int n) {
  printf("Enter the elements: \n");
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
}

void display(int arr[], int n) {
  printf("The sorted array...\n");
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

int main() {
  int n;
  printf("Enter number of elements: ");
  scanf("%d", &n);

  int arr[n];

  input(arr, n);
  BubbleSort(arr, n);
  display(arr, n);

  return 0;
}

/*OUTPUT
Enter number of elements: 5
Enter the elements:
1
6
5
8
3
The sorted array...
1 3 5 6 8
*/
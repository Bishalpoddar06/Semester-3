// Insertion Sort

#include <stdio.h>

void InsertionSort(int arr[], int n) {
  for (int i = 1; i < n; i++) {
    int temp = arr[i];
    int j = i - 1;
    while (j >= 0 && temp < arr[j]) {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = temp;
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
  InsertionSort(arr, n);
  display(arr, n);

  return 0;
}

/*OUTPUT
Enter number of elements: 5
Enter the elements:
1
7
3
5
4
The sorted array...
1 3 4 5 7
*/
// Linear Search

#include <stdio.h>

int LinearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i + 1;
        }
    }
    return -1;
}

void input(int arr[], int n) {
    printf("Enter the elements: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    input(arr, n);

    int key;
    printf("Enter element to search: ");
    scanf("%d", &key);

    int pos = LinearSearch(arr, n, key);
    if (pos != -1) {
        printf("Element found at position: %d", pos);
    } else {
        printf("Element not found");
    }

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
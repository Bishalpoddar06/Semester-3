// Linear Search

#include <stdio.h>

int BinarySearch(int arr[], int n, int key) {
    int l = 0, h = n - 1, m;
    while (l <= h) {
        m = (l + h) / 2;
        if (arr[m] == key)
            return m + 1;
        else if (arr[m] < key)
            l = m + 1;
        else
            h = m - 1;
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

    int pos = BinarySearch(arr, n, key);
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
3
4
7
8
Enter element to search: 3
Element found at position: 2
*/
#include <stdio.h>

void merge(int arr[], int l, int m, int r)
{

    int i, j, k;

    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
    {
        L[i] = arr[l + i];
    }
    for (i = 0; i < n2; i++)
    {
        R[i] = arr[m + i + 1];
    }

    i = l;
    j = 0;
    k = 0;
    while (j < n1 && k < n2)
    {
        if (L[j] < R[k])
        {
            arr[i] = L[j];
            j++;
        }
        else
        {
            arr[i] = R[k];
            k++;
        }
        i++;
    }

    while (j < n1)
    {
        arr[i] = L[j];
        i++;
        j++;
    }

    while (k < n2)
    {
        arr[i] = R[k];
        i++;
        k++;
    }
}

void mergesort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = (l + r) / 2;
        mergesort(arr, l, m);
        mergesort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

int main()
{
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = 6;

    mergesort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
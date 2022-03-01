#include <stdio.h>

void PrintArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void Merge(int A[], int low, int mid, int high)
{
    int i, j, k, B[high + 1];
    i = k = low;
    j = mid + 1;
    while (i <= mid && j <= high)
    {
        if (A[i] < A[j])
        {
            B[k] = A[i];
            i++;
            k++;
        }
        else
        {
            B[k] = A[j];
            j++;
            k++;
        }
    }

    while (i <= mid)
    {
        B[k] = A[i];
        k++;
        i++;
    }

    while (j <= high)
    {
        B[k] = A[j];
        k++;
        j++;
    }

    for (int m = 0; m < high; m++)
    {
        A[m] = B[m];
    }
}

void Mergesort(int A[], int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low+ high) / 2;
        Mergesort(A, low, mid);
        Mergesort(A, mid + 1, high);
        Merge(A, low, mid, high);
    }
}

int main()
{
    int A[] = {7, 1, 14, 15, 63, 89, 52, 45, 4, 7, 42, 5, 8, 32, 4};
    int n = 15;
    PrintArray(A, n);
    Mergesort(A, 0, 14);
    PrintArray(A, n);
    return 0;
}
#include <stdio.h>

void printarray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void bubblesort(int *A, int n)
{
    int temp;
    int is_sorted = 0;
    for (int i = 0; i < n; i++)
    {
        printf("Working on pass no. %d\n", i + 1);
        is_sorted = 1;
        for (int j = 0; j < n-1-i; j++)
        {
            if (A[j] > A[j +1])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
                is_sorted = 0;
            }
        }
        if (is_sorted)
        {
            return;
        }
    }
}

int main()
{
    int A[] = {1,2,3,4,5,6,7,8,9,10};
    //int B[] = {41, 2, 33, 44, 665, 136, 57, 6668, 9, 3310};
    int n = 10;
    printarray(A,n);
    //printarray(B, n);

    bubblesort(A,n);
    //bubblesort(B, n);

    printarray(A,n);
    //printarray(B, n);
    return 0;
}
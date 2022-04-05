#include <stdio.h>

// Printing an array elements
void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

// Sorting an array elements with insertion sort
void insertionsort(int *A, int n)
{
    int key, j;
    for (int i = 0; i < n; i++)
    {
        key = A[i];
        j = i - 1;
        while (j >= 0 && A[j] > key)
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = key;
    }
}
int main()
{
    int A[] = {43, 54, 76, 34, 23, 87};
    int n = sizeof(A) / sizeof(int);
    printf("Elements before sorting\n");
    printArray(A, n);
    insertionsort(A, n);
    printf("\nElements after sorting\n");
    printArray(A, n);

    return 0;
}
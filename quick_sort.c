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

// Partition an sorted array an unsorted array
int partition(int *A, int low, int high)
{
    int pivot = A[low];
    int i = low + 1;
    int j = high;
    int temp;
    do
    {
        while (A[i] <= pivot)
        {
            i++;
        }
        while (A[j] > pivot)
        {
            j--;
        }

        if (i < j)
        {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }

    } while (i < j);
    temp = A[low];
    A[low] = A[j];
    A[j] = temp;
    return j;
}

// quicksorting function in an array
void quicksort(int *A, int low, int high)
{
    if (low < high)
    {
        int partionIndex = partition(A, low, high);
        // printArray(A, 7);
        quicksort(A, low, partionIndex - 1);
        quicksort(A, partionIndex + 1, high);
    }
}
int main()
{
    int A[] = {34, 53, 64, 23, 75, 7, 44};
    int n = sizeof(A) / sizeof(int);
    printf("Elements before quicksorting\n");
    printArray(A, n);
    printf("\n");
    quicksort(A, 0, n-1);
    printf("\nElements after quicksorting\n");
    printArray(A, n);
    return 0;
} 
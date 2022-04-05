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

// Sorting the elements in the array
// Adavtive bubblesort Algo
void bubblesort(int *A, int n)
{
    int temp;
    int isSorted = 0;
    for (int i = 0; i < n - 1; i++)
    {
        // printf("working an passes %d\n",i+1);
        isSorted = 1;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (A[j] > A[j + 1])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
                isSorted = 0;
            }
        }
        if (isSorted)
        {
            return;
        }
    }
}
int main()
{
    // Unsorted array
    int A[] = {12, 54, 65, 34, 76, 3};

    // Sorted array
    //  int A[]={2,3,4,5,6,7,8};

    // Size getting line of array
    int n = sizeof(A) / sizeof(int);

    printf("Elements before sorting\n");
    printArray(A, n);
    bubblesort(A, n);
    printf("\nElements after sorting\n");
    printArray(A, n);

    return 0;
}
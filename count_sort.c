#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// Printing an array elements
void printArray(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int maxmimum(int A[], int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (max < A[i])
        {
            max = A[i];
        }
    }
    return max;
}

// Sorting an array elements with count sort 
void countsort(int *A, int n)
{
    int max = maxmimum(A, n);
    int i, j;
    int *count = (int *)malloc((max + 1) * sizeof(int));
    for (i = 0; i < max + 1; i++)
    {
        count[i] = 0;
    }
    
    for (i = 0; i < n; i++)
    {
        count[A[i]] = count[A[i]] + 1;
    }
    i = 0;
    j = 0;
    while (i <= max)
    {
        if (count[i] > 0)
        {
            A[j] = i;
            count[i] = count[i] - 1;
            j++;
        }
        else
            i++;
    }
}

int main()
{
    int A[] = {12, 20, 22, 32, 43, 23, 43, 21, 45, 11};
    int n = sizeof(A) / sizeof(int);
    // printf("\nElements before sorting\n");
    printArray(A, n);
    countsort(A, n);
    // printf("\nElements after sorting\n");
    printArray(A, n);
    return 0;
}
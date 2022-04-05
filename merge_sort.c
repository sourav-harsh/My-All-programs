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
 
//  Sorting an elements with merge sort
void mergesort(int *B, int m, int *A, int n, int *C)
{
    int i, j, k;
    i = j = k = 0;
    while (i < m && j < n)
    {
        if (A[i] < B[j])
        {
            C[k] = A[i];
            i++, k++;
        }
        else{
        C[k] = B[j];
        j++, k++;
        }
    }
    while (i < n)
    {
        C[k] = A[i];
        k++, i++;
    }
    while (j < m)
    {
        C[k] = B[j];
        k++, j++;
    }
}

int main()
{
    int A[] = {12, 23, 32, 38, 43, 65, 75, 78, 81};
    int B[] = {1, 29, 34, 87, 99, 100};
    int n = sizeof(A) / sizeof(int);
    int m = sizeof(B) / sizeof(int);
    int C[m+n];
    mergesort(B,m,A,n,C);
    int l = sizeof(C) / sizeof(int);
    printArray(A, n);
    printArray(B, m);
    printArray(C,l);
    return 0;
}

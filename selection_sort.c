#include<stdio.h>

//Printing an elements of an array
void printArray(int *A,int n)
{
    for (int  i = 0; i < n; i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
}

//Sorting an elements of an array with selection sort 
void selectionsort(int *A,int n)
{
    int indexMin,temp;
    for (int i = 0; i < n-1; i++)
    {
        indexMin=i;
        for (int j = i+1; j < n; j++)
        {
            if (A[j]<A[indexMin])
            {
             indexMin=j;   
            }
        }
        temp=A[i];
        A[i]=A[indexMin];
        A[indexMin]=temp;
    }
    
}
int main()
    int A[]={12,43,4,3,2,63,54,32};
    int n= sizeof(A)/sizeof(int);
    printf("Elements before sorting\n");
    printArray(A,n);
    selectionsort(A,n);
    printf("\nElements after sorting\n");
    printArray(A,n);
    return 0;
}
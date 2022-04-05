#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i,count,j,*ptr,k;
    printf("Enter the size of elements: ");
    scanf("%d",&j);
    ptr=(int*) malloc(j*sizeof(int));
    printf("Enter the elements:\n");
    for (k=0; k<j; k++)
    {
        scanf("%d",&ptr[k]);
    }
    printf("\nEnter an element to search:");
    scanf("%d",&n);
    count=0;
    for (i=0;i<j;i++)
    {
        if (ptr[i]==n)
        count++;
    }
    printf("Number %d is found %d time(s) in the array\n",n,count);
    return 0;
}
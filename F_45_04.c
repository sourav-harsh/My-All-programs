#include<stdio.h>

int main(){
    int num[1000];
    int i,j,k;
    printf("Enter the number to be stored in the array:");
    scanf("%d",&i);
    printf("Enter %d elements in the array:",i-1);
    for (j = 0; j < i; j++)
    {
      printf("elements-%d:",j);
      scanf("%d",&num[j]);
    }
    printf("The frequency of all elements of an array:");
    return 0;
}
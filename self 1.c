#include<stdio.h> 
void main() 
{ 
    int array[10], flag=0, pos, i, temp; 
    printf("Enter 10 elements of the array"); 
    for(i=0;i<10;i++) 
    { 
        scanf("%d", &array[i]); 
    } 
    printf("Enter no. to search:"); 
    scanf("%d", &temp); 
    for(i=0;i<10;i++) 
    { 
        if(temp == array[i]) 
        { 
            flag = 1; 
            pos = i+1; 
            break; 
        } 
    } 
    if(flag == 0) 
    printf("%d Not found", temp); 
    else 
    printf("%d found at position %d", temp, pos); 
} 
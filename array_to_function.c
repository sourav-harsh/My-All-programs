#include<stdio.h>
void printarray(int ptr[],int n){
    for ( int i = 0; i < n; i++)
    {
        printf("the value of array %d is %d\n", i+1,ptr[i]);
    }
    

}


int main(){
    int array[] = {12,34,54,65,76,87,98,9};
    printarray(array,8);
    
    return 0;
}
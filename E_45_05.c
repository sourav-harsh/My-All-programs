#include <stdio.h>

void main(){
  int rows, i, j;
  printf("Enter Number Of Rows You Want: ");
  scanf("%d", &rows);
 
  for(i = 1; i<= rows; i++){
    for(j = i; j>=1; j--){
      printf("%d ", j);
    }
    printf( "\n" );
  }
 
}
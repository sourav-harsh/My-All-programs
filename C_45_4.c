#include<stdio.h>

int main(){
  int a, b;
  int x=0;
  int z=0;
   printf("Enter the value of a and b: ");
  scanf("%d%d",&a, &b);
  printf("Prime number From %d To %d are: ",a,b);
  
  for(int i=a; i<=b; i++) {
    int flag=0;
    for(int j=2; j<i/2; j++) {
      if(i%j==0) {
        flag=1;
        break;
      }
    }
    if(flag==0)
      printf("%d ", i);
      
  }
  printf("\n");
    return 0;
}
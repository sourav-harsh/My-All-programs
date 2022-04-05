#include<stdio.h>
#include<math.h>

int main(){
   
   int n = 9879,s,i;
   do{
       s = 0;
       for ( i = n; i>0; i=i/10)
       
        s += i%10;
        n =s;
       
   }while (n>9);
   printf("%d",s);
   return 0 ;
}
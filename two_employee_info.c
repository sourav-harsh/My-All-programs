#include<stdio.h>

int main(){
    char a,b;
    int c,d;
    printf("Enter the name of first employee is \n");
         scanf("%c",&a);
           fflush(stdin);
    printf("Enter the salary of first employee is \n");
          scanf("%d",&c);
            fflush(stdin);
    printf("Enter the name of second employee is \n");
         scanf("%c",&b);
           fflush(stdin);
    printf("Enter the salary of second employee is \n");
          scanf("%d",&d);
            fflush(stdin);
    FILE *ptr;
    ptr = fopen("employee info.txt","w");
  
     fprintf(ptr,"%c ,%d\n",a,c);  
    fprintf(ptr,"%c ,%d\n",b,d);
    fclose(ptr);

    return 0;
}
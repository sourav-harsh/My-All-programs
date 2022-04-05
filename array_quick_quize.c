#include<stdio.h>

int main(){
    int marks[5];
    printf("Enter the first marks\n");
     scanf("%d",&marks[0]);
    printf("Enter the second marks\n");
     scanf("%d",&marks[1]);
    printf("Enter the third marks\n");
     scanf("%d",&marks[2]);
    printf("Enter the fourth marks\n");
     scanf("%d",&marks[3]);
    printf("Enter the fifth marks\n");
     scanf("%d",&marks[4]);

     printf("All marks are %d ,%d ,%d ,%d and %d\n",marks[0],marks[1],marks[2],marks[3],marks[4]);
    return 0;
}
#include<stdio.h>

int main(){
    int n_student=3;
    int n_subject;
    int marks[3][2];
    for (int i = 0; i < n_student; i++){
     for (int j = 0; j < n_subject; j++){
         printf("Enter the marks for student %d and subject %d: \n",i+1,j+1);
         scanf("%d",&marks[i][j]);
        }
    }
     for (int i = 0; i < n_student; i++){
       for (int j = 0; j < n_subject; j++){
         printf("The marks for student %d and subject %d: %d \n",i+1,j+1,marks[i][j]);
         }
    }
    return 0;
}
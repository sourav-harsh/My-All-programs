#include<stdio.h>

int main(){
    int num = 540;
    FILE *ptr;
    ptr = fopen("num.txt","w");
    fprintf(ptr,"The num is %d",num);
    fclose(ptr);
    return 0;
}
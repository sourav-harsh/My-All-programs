#include<stdio.h>
void encrypt(char *c){
    char *ptr=c;
    while(*ptr!='\0'){
        *ptr=*ptr+1;
        ptr++;
    }
}

int main(){
    char c[]="How are you\n";
    encrypt(c);
    printf("code message is: %s",c);
    return 0;
}
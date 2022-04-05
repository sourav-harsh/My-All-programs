#include<stdio.h>
void decrypt(char *c){
    char *ptr=c;
    while(*ptr!='\0'){
        *ptr=*ptr-1;
        ptr++;
    }
}

int main(){
    char c[]="  Ipx!bsf!zpv\n";
    decrypt(c);
    printf("code message is: %s",c);
    return 0;
}
#include<stdio.h>

void slice(char *st,int m,int n){
int i=0;
while ((m+i)<n)
{
    st[i] = st[i+m];
   i++;
}

st[i]='\0';
}


int main(){
    char t[]="sourav kumar";
    slice(t,0,9);
    printf("%s",t);
    return 0;
}
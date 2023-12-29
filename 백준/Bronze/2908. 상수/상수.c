#include <stdio.h>
#include <string.h>


int main(){
    char a[4]={0};
    char b[4]={0};
    int suma=0;
    int sumb=0;
    scanf("%s %s",a,b);

    for(int i=0; i<2;i++){
        int k = a[2-i]-48;
        a[2-i] = a[i]-48;
        a[i] = k;
    }
    suma = a[0]*100+a[1]*10+a[2];

    for(int i=0; i<2;i++){
        int k = b[2-i]-48;
        b[2-i] = b[i]-48;
        b[i] = k;
    }
    sumb = b[0]*100+b[1]*10+b[2];

    if(suma>sumb){
        printf("%d", suma);

    }
    else printf("%d",sumb);

}
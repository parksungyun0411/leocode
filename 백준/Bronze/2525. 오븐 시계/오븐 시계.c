#include <stdio.h>

int main(){
    int h,m,k,a,b;
    scanf("%d %d", &h, &m);
    scanf("%d", &k);
    a=k/60; b=k%60;
    if (h+a==23){
        if (m+b>=60) {
        h=0;
        m=m+b-60;
        }
        else {
            h=h+a;
            m=m+b;
        }
    }
    else if (h+a>23){
        h=h+a-24;
        if (m+b>=60) {
        h=h+1;
        m=m+b-60;
        }
        else m=m+b;
    }
    else{
        if (m+b>=60) {
        h=h+1+a; 
        m=m+b-60;
        }
        else {
            h=h+a;
            m=m+b;
        }
    }

    printf("%d %d\n", h,m);
    
}

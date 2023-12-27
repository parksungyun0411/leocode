#include <stdio.h>

int main(){
    int h,m;
    scanf("%d %d\n", &h, &m);
    if (h==0){
        if (m<45) {
        h=23; 
        m=m+60-45;
        }
        else m=m-45;
    }
    else{
        if (m<45) {
        h=h-1; 
        m=m+60-45;
        }
        else m=m-45;
    }

    printf("%d %d", h,m);
    
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){
    int N,X,i,k=0;
    int a[10001];

    scanf("%d", &N);
    scanf("%d", &X);

    for(int j=0;j<N;j++){
        scanf("%d", &a[i++]);
    }


    for(k=0;k<N;k++){
        if(a[k]<X){
            printf("%d ",a[k]);
        }
    }

   
}
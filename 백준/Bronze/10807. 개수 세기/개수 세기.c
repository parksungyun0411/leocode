#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){
    int N,k,b,i,count=0;
    int a[102] ;

    scanf("%d", &N);
    for(int j=0;j<N;j++){
        scanf("%d", &a[i++]);
    }


    int v =0;
    scanf("%d",&v);
    for(k=0;k<N;k++){
        if(a[k]==v){
            count++;
        }
    }

    printf("%d\n", count);
   
}

#include <stdio.h>

int main(){
    int N,M,i,j,k=0;
    scanf("%d %d",&N,&M);
    int a[101]={0};

    for(int q=1;q<=M;q++){
        scanf("%d %d %d",&i,&j,&k);
        for(i;i<=j;i++){
            a[i] = k;
        }
    }

    for(int w=1; w<=N;w++){
        printf("%d ",a[w]);
    }
}
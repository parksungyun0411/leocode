#include <stdio.h>

int main(){
    int N,M,i,j,k=0;
    scanf("%d %d",&N,&M);
    int a[101];

    for(int q=1;q<=N;q++){
        a[q]=q;
    }

    for(int w=1;w<=M;w++){
        scanf("%d %d", &i,&j);
        k=a[i];
        a[i] = a[j];
        a[j]=k;
    }

    for(int e=1; e<=N;e++){
        printf("%d ",a[e]);
    }
}
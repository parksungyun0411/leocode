#include <stdio.h>
#include <string.h>


int main(){
    int N, sum=0;
    char S[101]={0};
    scanf("%d",&N);
    scanf("%s",&S);

    for(int i=0;i<N;i++){
        sum = sum + (S[i]-48);
    }

    printf("%d", sum);
}
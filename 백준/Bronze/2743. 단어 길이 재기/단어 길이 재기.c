#include <stdio.h>

int main(){
    char S[101];
    int num,count=0;
    scanf("%s",&S);

    while(S[num] != '\0'){
        count++;
        num++;
    }
    printf("%d",count);
}
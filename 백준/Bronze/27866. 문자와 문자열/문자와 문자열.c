#include <stdio.h>

int main(){
    char S[1001];
    int num;
    scanf("%s",&S);

    scanf("%d", &num);

    printf("%c", S[num-1]);
}
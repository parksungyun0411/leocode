#include <stdio.h>
#include <string.h>


int main(){
    char S[101]= {0};
    char T[26] = {0};
    int i = 0;
    scanf("%s",&S);

    for(int k=0;k<26;k++){
        T[k] = -1;
    }

    while(S[i] != '\0'){
        if(T[(int)S[i]-97] == -1){
            T[S[i]-97] = i;
        }
        i++;
    }

    for(int j=0; j<26;j++){
        printf("%d ", T[j]);
    }

}
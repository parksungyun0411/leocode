#include <stdio.h>
#include <string.h>


int main(){
    int T,R=0;
    char S[21];

    scanf("%d", &T);
    for(int i=0; i<T; i++){
        scanf("%d %s",&R, &S);
        for(int j=0;S[j] != '\0';j++){
            for(int k=0;k<R;k++){
                printf("%c",S[j]);
            }
            
        }
        printf("\n");
    }

}
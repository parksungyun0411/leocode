#include <stdio.h>

int main(){
    int x;
    scanf("%d",&x);

    int a,b=0;

    for(int i=1;i<x+1;i++){
        for(int j=1;j<i+1;j++){
            printf("*");

        }
        printf("\n");
    }
    
}

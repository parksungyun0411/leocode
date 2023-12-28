#include <stdio.h>

int main(){
    int a[9];
    int b=0;

    for(int i=1;i<=9;i++){
        scanf("%d",&b);
        a[i]=b;
    }

    int max = a[1];
    int max_num = 1;
    
    for(int j=1;j<=9;j++){
        
        if(a[j]>max){
            max = a[j];
            max_num = j;
        }
    }
    printf("%d\n", max);
    printf("%d\n", max_num);
}
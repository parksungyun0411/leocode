#include <stdio.h>



int main(){
    int N,X,k=0;
    

    scanf("%d", &N);

    int a[N];

    for(int i=0;i<N;i++){
        int b=0;
        scanf("%d", &b);
        a[i]=b;
    }
    
    int max = -1000000;
    int min = 1000000;
    
    for(k=0;k<N;k++){
        if(a[k]>max){
            
            max = a[k];
        }

        if(a[k]<min){
            min = a[k];
        }
        
    }
    printf("%d %d", min, max);
}
   
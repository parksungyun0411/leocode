#include <stdio.h>

int main(){
    long long int x;
    scanf("%lld",&x);

    int a,b=0;

    for(int i=0;i<x;i++){
        scanf("%d %d",&a,&b);
        printf("%d\n",a+b);
    }
    
}

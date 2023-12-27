#include <stdio.h>

int main(){
    long long x;
    scanf("%lld",&x);

    int k=0;
    scanf("%d", &k);
    int a,b,sum=0;
    for(int i=0;i<k;i++){
        scanf("%d %d",&a,&b);
        sum = sum + a*b;
    }
    
    if(x==sum){
        printf("Yes");
    }
    else printf("No");
    
}
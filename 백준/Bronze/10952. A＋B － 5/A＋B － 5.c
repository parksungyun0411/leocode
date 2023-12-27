#include <stdio.h>

int main(){
    int i=0;
    while(i==0){
        int a,b=0;
        scanf("%d %d", &a,&b);
        if((a==0)&&(b==0)){
            break;
        }
        else printf("%d\n",a+b);
        
    }
    
}
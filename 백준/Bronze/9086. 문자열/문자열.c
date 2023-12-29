#include <stdio.h>
#include <string.h>


int main(){
    char S[1001];
    int num,count,n=0;
    scanf("%d",&num);

    for(int i=0;i<num;i++){
    
        scanf("%s",&S);
        while(S[n] != '\0'){
            count++;
            n++;
        }
        printf("%c%c\n",S[0],S[count-1]);
        n=0; count=0;
        
    }
    
}
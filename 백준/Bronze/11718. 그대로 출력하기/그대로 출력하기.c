#include <stdio.h>
#include <string.h>


int main(){
    
    char s[101]={0};
    while(scanf("%[^\n]s",s)!= EOF){
        printf("%s",s);
        getchar();
        printf("\n");
    }
    
}
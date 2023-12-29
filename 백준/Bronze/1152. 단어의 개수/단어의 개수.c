#include <stdio.h>
#include <string.h>


int main(){
    char s[1000001]={0};
    int i=0;
    int count=0;

    scanf("%[^\n]s", s);
    while(s[i] != '\0'){
        if(s[i]==' '){
            count++;           
        }
        i++;
    }
    if(s[0]==' '){
        count--;
    }
    if(s[i-1]==' '){
        count--;
    }
    printf("%d\n", count+1);
    return 0 ;
}
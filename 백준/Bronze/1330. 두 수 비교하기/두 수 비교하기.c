#include <stdio.h>

int main(){
    int a,b;
    scanf("%d %d\n", &a, &b);
    if(a>b)printf(">");
    else if(a==b) printf("==");
    else printf("<");
    
}

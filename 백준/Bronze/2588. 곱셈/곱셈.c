#include <stdio.h>

int main(){
    int a,b;
    scanf("%d\n", &a);
    scanf("%d\n", &b);
    
    int c,d,e;
    c=b/100;
    e=b%10;
    d=(b/10)%10;
    printf("%d\n", a*e);
    printf("%d\n", a*d);
    printf("%d\n", a*c);
    printf("%d\n", a*(e+10*d+100*c));
}

#include <stdio.h>
#include <string.h>


int main(){
    char s[16];
    int i=0;
    int sum=0;
    scanf("%s", s);

    while(s[i] != '\0'){
        if((s[i]==65)||(s[i]==66)||(s[i]==67)){
            s[i] = 2;
        }
        else if((s[i]==68)||(s[i]==69)||(s[i]==70)){
            s[i] = 3;
        }
        else if((s[i]==71)||(s[i]==72)||(s[i]==73)){
            s[i] = 4;
        }
        else if((s[i]==74)||(s[i]==75)||(s[i]==76)){
            s[i] = 5;
        }
        else if((s[i]==77)||(s[i]==78)||(s[i]==79)){
            s[i] = 6;
        }
        else if((s[i]==80)||(s[i]==81)||(s[i]==82)||(s[i]==83)){
            s[i] = 7;
        }
        else if((s[i]==84)||(s[i]==85)||(s[i]==86)){
            s[i] = 8;
        }
        else if((s[i]==87)||(s[i]==88)||(s[i]==89)||(s[i]==90)){
            s[i] = 9;
        }
        i++;

    }
    
    for(int j=0; j<i;j++){
        sum = sum + s[j] + 1;
    }
    printf("%d\n", sum);
    
    
}
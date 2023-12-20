#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int solution(int num_list[], size_t num_list_len, int n) {
    int answer = 0;
    int k=0;
    while(k<=num_list_len-1){
        if(num_list[k]==n)
            answer = 1;
        k++;
    }
    return answer;
}
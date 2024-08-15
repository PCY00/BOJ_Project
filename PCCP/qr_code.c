#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(int q, int r, const char* code) {
    char* answer = (char*)malloc(strlen(code)+1);
    int j = 0;
    for(int i = 0; code[i] != '\0'; i++){
        if(i % q == r){
            answer[j] = code[i];
            j++;
        }
    }
    answer[j] = '\0';
    return answer;
}

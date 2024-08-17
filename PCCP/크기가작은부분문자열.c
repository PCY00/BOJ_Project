#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int len(const char* str);

int solution(const char* t, const char* p) {
    int answer = 0;
    int t_len = len(t);
    int p_len = len(p);

    for (int i = 0; i <= t_len - p_len; i++) {
        bool check = true;

        for (int j = 0; j < p_len; j++) {
            if (t[i + j] < p[j]) {
                break;
            } else if (t[i + j] > p[j]) {
                check = false;
                break;
            }
        }

        if (check) {
            answer++;
        }
    }

    return answer;
}

int len(const char* str){
    int i = 0;
    while(*str != '\0'){
        str++;
        i++;
    }
    return i;
}

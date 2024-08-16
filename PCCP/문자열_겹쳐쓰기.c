#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int len(const char* str);

char* solution(const char* my_string, const char* overwrite_string, int s) {
    char* answer = (char*)malloc(sizeof(char*) * len(my_string));
    int j = 0;
    for(int i = 0; i <= len(my_string); i++){
        if(i >= s && i < len(overwrite_string) + s){
            answer[i] = overwrite_string[j++];
        }else{
            answer[i] = my_string[i];
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

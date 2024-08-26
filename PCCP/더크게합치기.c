#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int len(int x);
int ze(int t);

int solution(int a, int b) {
    int answer = 0;
    
    if(a * ze(len(b)) + b >= b * ze(len(a)) + a){
        answer = a * ze(len(b)) + b;
    }else{
        answer = b * ze(len(a)) + a;
    }
    
    return answer;
}

int len(int x) {
    int y = 0;
    while (x != 0) {
        x /= 10;
        y++;
    }
    return y;
}

int ze(int t){
    int a = 1;
    for(int i = 0; i < t; i++){
        a *= 10;
    }
    return a;
}

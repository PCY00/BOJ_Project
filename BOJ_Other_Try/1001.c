#include <stdio.h>

int subtract(int a, int b);

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", subtract(a,b));
    return 0;
}

int subtract(int a, int b){
    while(b != 0){
        int borrow = (~a) & b;
        a = a ^ b;
        b = borrow << 1;
    }
    return a;
}

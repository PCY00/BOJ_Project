#include <iostream>

using namespace std;

int subtract(int a, int b);

int main(){
    int a, b;
    cin >> a >> b;
    
    cout << subtract(a,b);
    return 0;
}

int subtract(int a, int b){
    while(b != 0){
        //bit 반전하여 & 사용 -> 빌림수를 확인 가능
        int borrow = (~a) & b;
        // xor로 빼기 진행
        a = a ^ b;
        b = borrow << 1;
    }
    return a;
}

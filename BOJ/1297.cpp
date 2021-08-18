#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int D, H, W; //대각선, 높이 비율, 너비 비율
    double RH, RW; // 실제 높이, 실제 너비
    cin >> D >> H >> W;
    
    double x = D / sqrt(pow(H, 2) + pow(W, 2)); // 피타고라스 성질 이용하여 x값 구하기

    RH = x * H; // 비율 곱해주면 실제 높이
    RW = x * W; // 위랑 같음 여긴 너비

    cout << (int)RH << " " << (int)RW << "\n"; // 밑에 자리수 버리라고 했으니 (int)로 형변환

    return 0;
}
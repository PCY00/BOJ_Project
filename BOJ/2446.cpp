//https://omyodevelop.tistory.com/44 보고 이해함.
#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) { //위에 5줄 표현
        for (int k = 0; k < i; k++) {
            cout << " ";
        }
        for (int j = 0; j < (2 * (N - i)) - 1; j++){
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 1; i < N; i++) {  //밑은 4줄만 나타내기에 i를 1부터 시작
        for (int j = 1; j <  N - i; j++) {
            cout << " ";
        }
        for (int k = 1; k < (2 * i) + 2; k++) {
            cout << "*";
        }
        cout << endl;
    }
}
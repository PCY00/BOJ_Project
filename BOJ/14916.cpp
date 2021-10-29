#include <iostream>
using namespace std;

int main() {
    int n, cnt = 0;
    cin >> n;
    while (!(n % 5 == 0 || n <= 0)) {
        n -= 2;
        cnt++;
    }
    if (n < 0) {
        cout << "-1";
        return 0;
    }
    cout << n / 5 + cnt;
}
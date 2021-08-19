#include <iostream>

using namespace std;

int main()
{
    int a, b, c; // 주사위 a,b,c

    cin >> a >> b >> c;

    if (a == b && a == c) {
        cout << (10000 + (a * 1000)) << "\n";
    }
    else if (a == b || a == c) {
        cout << (1000 + (a * 100)) << "\n";
    }
    else if (b == c) {
        cout << (1000 + (b * 100)) << "\n";
    }
    else {
        int max = 0;
        if (a > b && a > c) {
            max = a;
        }
        else if (b > a && b > c) {
            max = b;
        }
        else {
            max = c;
        }
        cout << max * 100  << "\n";
    }
    return 0;
}
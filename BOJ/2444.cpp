#include <iostream>

using namespace std;

int main()
{
    int N;

    cin >> N;

    for (int k = 0; k < N; k++) {
        for (int i = 1; i < N - k; i++) {
            cout << " ";
        }
        for (int j = 0; j < 2 * k + 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
    for (int k = 1; k < N; k++) {
        for (int j = 0; j < k; j++) {
            cout << " ";
        }
        for (int i = 0; i < 2 * (N - k) - 1; i++) {
            cout << "*";
        }
        cout << endl;
    }
}
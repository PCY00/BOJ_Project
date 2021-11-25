#include <iostream>
#include <cmath>

using namespace std;

bool arr[10000001] = { false, };


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    arr[0] = arr[1] = true;
    for (int i = 2; i < sqrt(n); i++) {
        if (arr[i] == false) {
            for (int j = i + i; j <= n; j += i) {
                arr[j] = true;
            }
        }
    }
    for (int i = 2; i <= n; i++) {
        if (arr[i] == false) {
            if (n % i == 0) {
                while (1) {
                    if (n % i != 0) break;
                    else {
                        n /= i;
                        cout << i << '\n';
                    }
                }
            }
        }
    }
    return 0;
}
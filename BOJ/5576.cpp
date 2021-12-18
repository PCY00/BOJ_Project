#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int arr[10];
    int brr[10];
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < 10; i++) {
        cin >> brr[i];
    }
    sort(arr, arr + 10);
    sort(brr, brr + 10);
    int sum = 0;
    int summ = 0;
    for (int i = 9; i >= 7; i--) {
        sum += arr[i];
        summ += brr[i];
    }
    cout << sum << " " << summ;
    return 0;
}
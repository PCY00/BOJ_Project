#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int arr[8];
	int brr[8] = { 0, };
	for (int i = 0; i < 8; i++) {
		cin >> arr[i];
		brr[i] = arr[i];
	}
	sort(arr, arr + 8);
	int sum = 0;
	for (int i = 0; i < 8; i++) {
		if (brr[i] > arr[2]) {
			sum += brr[i];
		}
	}
	cout << sum << endl;
	for (int i = 0; i < 8; i++) {
		if (brr[i] > arr[2]) {
			cout << i + 1 << " ";
		}
	}
	return 0;
}
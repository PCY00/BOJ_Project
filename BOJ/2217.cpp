#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n, sum = 0;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n, greater<>());
	for (int i = 0; i < n; i++) {
		arr[i] *= i + 1;
		if (sum < arr[i]) {
			sum = arr[i];
		}
	}
	cout << sum << '\n';
	delete[] arr;
	return 0;
}
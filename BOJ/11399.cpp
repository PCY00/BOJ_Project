#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n, save = 0;
	cin >> n;
	int* arr = new int[n];
	int* sum = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);
	for (int i = 0; i < n; i++) {
		save += arr[i];
		sum[i] = save;
	}
	save = 0;
	for (int i = 0; i < n; i++) {
		save += sum[i];
	}
	cout << save;
	delete[] arr;
	delete[] sum;
	return 0;
}
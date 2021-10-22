#include <iostream>

using namespace std;

int main() {
	int N, check = 0;
	cin >> N;
	int arr[1001] = { 0, };
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (arr[i] < arr[j]) {
				int t = arr[i];
				arr[i] = arr[j];
				arr[j] = t;
			}
		}
	}
	for (int i = 0; i < N; i++) {
		cout << arr[i] << endl;
	}
	return 0;
}
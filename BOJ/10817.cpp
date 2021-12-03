#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int arr[3];
	for (int i = 0; i < 3; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < 3; i++) {
		for (int j = i; j < 3; j++) {
			if (arr[i] > arr[j]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	cout << arr[1] << '\n';
	return 0;
}
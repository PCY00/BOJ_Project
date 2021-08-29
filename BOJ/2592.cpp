#include <iostream>

using namespace std;

int main() {
	int arr[10] = { 0, };
	int sum = 0;
	int count[10] = { 0, };

	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
		sum += arr[i];
	}
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (arr[i] == arr[j]) {
				count[i] += 1;
			}
		}
	}
	int num = 0, a = 0;
	for (int i = 0; i < 10; i++) {
		if (num < count[i]) {
			num = count[i];
			a = i;
		}
	}
	sum = sum / 10;  //평균
	cout << sum << endl;
	cout << arr[a] << endl;

	return 0;
}
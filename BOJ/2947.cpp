#include <iostream>

using namespace std;

int main() {
	int arr[5];
	int c = 5;
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
	}
	while (1) {
		for (int i = 0; i < 4; i++) {
			if (arr[i] > arr[i + 1]) {
				int temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
				for (int j = 0; j < 5; j++) {
					cout << arr[j] << " ";
				}
				cout << endl;
			}
		}
		c = 0;
		for (int i = 0; i < 5; i++) {
			if (arr[i] == i + 1) {
				c++;
			}
		}
		if (c == 5) {
			break;
		}
	}

	return 0;
}
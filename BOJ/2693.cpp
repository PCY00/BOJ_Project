#include <iostream>

using namespace std;

int main() {
	int n, count = 0;
	int arr[10], result[1000];
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int i = 0; i < 10; i++) {
			cin >> arr[i];
		}
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 10; j++) {
				if (arr[i] > arr[j]) {
					int temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
			}
		}
		count = arr[2];
		cout << count << endl;
	}
	return 0;
}
#include <iostream>

using namespace std;

int main() {
	int arr[3] = { 0, };
	int brr[3] = { 1, 1, 1 };
	int cnt = 1;
	for (int i = 0; i < 3; i++) {
		cin >> arr[i];
	}
	while (1) {
		if (arr[0] == brr[0] && arr[1] == brr[1] && arr[2] == brr[2]) break;
		if (brr[0] == 15) {
			brr[0] = 0;
		}
		if (brr[1] == 28) {
			brr[1] = 0;
		}
		if (brr[2] == 19) {
			brr[2] = 0;
		}
		brr[0]++;
		brr[1]++;
		brr[2]++;
		cnt++;
	}
	cout << cnt << '\n';
	return 0;
}
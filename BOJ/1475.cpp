#include <iostream>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string str;
	cin >> str;
	int sum = 0, result = 0, max = 0;
	int arr[10] = { 0, };
	for (int i = 0; i < str.length(); i++) {
		sum = str[i] - '0';
		if (sum == 9) {
			arr[6]++;
		}
		else {
			arr[sum]++;
		}
	}
	if (arr[6] % 2 == 1) {
		arr[6] = arr[6] / 2 + 1;
	}
	else {
		arr[6] = arr[6] / 2;
	}
	for (int i = 0; i < 9; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}
	cout << max;
	return 0;
}
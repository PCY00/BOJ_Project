#include <iostream>

using namespace std;

int main() {
	int k;
	cin >> k;
	int arr[45][1];
	arr[0][0] = 1;
	arr[0][1] = 0;
	arr[1][0] = 0;
	arr[1][1] = 1;
	arr[2][0] = 1;
	arr[2][1] = 1;
	for (int i = 3; i <= k; i++) {
		arr[i][0] = arr[i - 1][0] + arr[i - 2][0];
		arr[i][1] = arr[i - 1][1] + arr[i - 2][1];
	}
	cout << arr[k][0] << " " << arr[k][1] << endl;
	return 0;
}
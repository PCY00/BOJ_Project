#include <iostream>

using namespace std;

int arr[1001];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int a, b;
	int cnt = 1, sum = 0;
	cin >> a >> b;
	for (int i = 1; i <= 1000;) {
		for (int j = 1; j <= cnt && i <= 1000; j++) {
			arr[i++] = cnt;
		}
		cnt++;
	}
	for (int i = a; i <= b; i++) {
		sum += arr[i];
	}
	cout << sum;
	return 0;
}
#include <iostream>

using namespace std;

int arr[10000] = { 0, };

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, k;
	int ck = 0, a = 2, b = 2;
	int sum = 0;
	cin >> n >> k;
	for (int i = 2; i <= n; i++) {
		arr[i] = i;
	}
	while (1) {
		if (ck == k) break;
		while (1) {
			if (arr[a] == 0) break;
			else if (arr[a] != -1) {
				sum = arr[a];
				arr[a] = -1;
				ck++;
			}
			if (ck == k) break;
			a += b;
		}
		b++;
		a = b;
	}
	cout << sum;
	return 0;
}
#include <iostream>

using namespace std;

int arr[1000000] = { 0, };

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int a, b, c = 1;
	cin >> a >> b;
	int sum = 0;
	for (int i = 1; i <= b; i++) {
		for (int j = 1; j <= i; j++) {
			arr[c] = i;
			c++;
		}
	}
	for (int i = a; i <= b; i++) {
		sum += arr[i];
	}
	cout << sum;
	return 0;
}
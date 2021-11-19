#include <iostream>

using namespace std;

long long d[1000001] = { 0, };
long long dp(int n);

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, num;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num;
		cout << dp(num) << '\n';
	}
	return 0;
}
long long dp(int n) {
	if (n == 1) return 1;
	if (n == 2) return 1;
	if (n == 3) return 1;
	if (n == 4) return 2;
	if (n == 5) return 2;
	if (n == 6) return 3;
	if (n == 7) return 4;
	if (n == 8) return 5;
	if (d[n] != 0) return d[n];
	else {
		return d[n] = dp(n - 1) + dp(n - 5);
	}
	return 0;
}
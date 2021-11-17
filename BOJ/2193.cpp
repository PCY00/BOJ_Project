#include <iostream>

using namespace std;

long long arr[1001];
long long dp(int n);

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n; // 자리수
	cin >> n;
	cout << dp(n);
	return 0;
}

long long dp(int n) {
	if (n == 0) return 0;
	if (n == 1) return 1;
	if (n == 2) return 1;
	if (arr[n] != 0) return arr[n];
	return arr[n] = dp(n - 1) + dp(n - 2);
}

#include <iostream>

using namespace std;

long long d[100001];

long long dp(int n);

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	cout << dp(n) << '\n';
	return 0;
}

long long dp(int n) {
	if (n == 0) return 0;
	if (n == 1) return 1;
	if (n == 1) return 1;
	if (d[n] != 0) return d[n];
	else {
		return d[n] = dp(n - 1) + dp(n - 2);
	}
}
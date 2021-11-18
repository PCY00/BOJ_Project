#include <iostream>

using namespace std;

int d[100001];
int dp(int n);

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	cout << dp(n) << '\n';
	return 0;
}

int dp(int n) {
	if (n == 1) return 0;
	if (n == 2)return 1;
	if (n == 3) return 1;
	if (d[n] != 0) return d[n];
	else if (n % 2 != 0 && n % 3 != 0) {
		return d[n] = 1 + dp(n - 1);
	}
	else if (n % 2 == 0 && n % 3 == 0) {
		return d[n] = min(1 + dp(n / 2), 1 + dp(n / 3));
	}
	else if (n % 2 == 0) {
		return d[n] = min(1 + dp(n / 2), 1 + dp(n - 1));
	}
	else if (n % 3 == 0) {
		return d[n] = min(1 + dp(n / 3), 1 + dp(n - 1));
	}
	return 0;
}
#include <iostream>

using namespace std;

int ti[1001];
int dp(int n);

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	cout << dp(n) << '\n';
	return 0;
}

int dp(int n) {
	if (n == 1) return 1;
	if (n == 2) return 3;
	if (ti[n] != 0) return ti[n];
	return ti[n] = (dp(n - 1) + 2 * dp(n - 2)) % 10007;
}
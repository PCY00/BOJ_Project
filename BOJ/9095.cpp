#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);
	int dp[12] = { 0, };
	int t, n;
	cin >> t;

	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;

	for (int i = 0; i < t; i++) {
		cin >> n;
		for (int j = 4; j <= n; j++) {
			dp[j] = dp[j - 3] + dp[j - 2] + dp[j - 1];
		}

		cout << dp[n] << endl;
	}
	return 0;
}
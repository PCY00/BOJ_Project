﻿#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	int dp[1001] = { 0, };
	cin >> n;
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 3;
	for (int i = 4; i <= n; i++) {
		dp[i] = dp[i - 2] + dp[i - 1];
		dp[i] %= 10007;
	}
	cout << dp[n] << '\n';
	return 0;
}
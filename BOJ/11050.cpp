#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, k;
	int save = 0;
	int sum1 = 1, sum2 = 1;
	cin >> n >> k;
	save = n;
	for (int i = 0; i < k; i++) {
		sum1 *= save - i;
	}
	for (int i = 1; i <= k; i++) {
		sum2 *= i;
	}
	cout << sum1 / sum2 << '\n';
	return 0;
}
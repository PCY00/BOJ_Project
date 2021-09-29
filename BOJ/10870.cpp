#include <iostream>

using namespace std;

int arr[1001];

int DP(int F) {
	if (F == 0) return 0;
	if (F == 1) return 1;
	if (arr[F] != 0) return arr[F];
	return arr[F] = DP(F - 1) + DP(F - 2);
}

int main() {
	int n;
	cin >> n;
	cout << DP(n);
	return 0;
}

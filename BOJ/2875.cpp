#include <iostream>

using namespace std;

int main() {
	int N, M, K;
	int cnt = 0;
	cin >> N >> M >> K;
	int sum = 0;
	sum = (N + M - K) / 3;
	if (sum > N / 2) {
		cout << N / 2 << '\n';
	}
	else if (sum > M) {
		cout << M << '\n';
	}
	else if (N == 0 || M == 0) {
		cout << "0" << '\n';
	}
	else {
		cout << sum << '\n';
	}
	return 0;
}
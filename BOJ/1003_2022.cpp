#include <iostream>

using namespace std;

int arrfi[41] = { 0, };
int fi(int n);

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int T, N;
	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> N;
		fi(N);
		if (N < 1) {
			if (N == 0) {
				cout << 1 << " " << 0 << '\n';
			}
		}
		else {
			cout << arrfi[N - 1] << " " << arrfi[N] << '\n';
		}
		
	}
	return 0;
}

int fi(int n) {
	if (n == 0) {
		arrfi[n] = 0;
		return 0;
	}
	else if (n == 1) {
		arrfi[n] = 1;
		return 1;
	}
	else if (arrfi[n] != 0) {
		return arrfi[n];
	}
	else {
		return arrfi[n] = fi(n - 1) + fi(n - 2);
	}
}
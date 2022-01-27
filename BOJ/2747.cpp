#include <iostream>

using namespace std;

int re[46] = { 0, };
int fibo(int n);

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int a;
	cin >> a;
	cout << fibo(a) << '\n';
	return 0;
}

int fibo(int n) {
	int sum = 0;
	re[0] = 0;
	re[1] = 1;
	re[2] = 1;
	if (n >= 2) {
		for (int i = 3; i <= n; i++) {
			re[i] = re[i - 1] + re[i - 2];
		}
	}
	return re[n];
}
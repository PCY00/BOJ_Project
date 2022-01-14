#include <iostream>

using namespace std;

int cnt(int n);

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	cout << cnt(n) << '\n';
	return 0;
}

int cnt(int n) {
	int re = 1, save = 0;
	int sum = 1;
	while (1) {
		if (n == 1) return re;
		else {
			save += 6;
			sum += save;
			re++;
			if (n - sum <= 0) return re;
		}
	}
}
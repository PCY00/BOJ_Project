#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, a, b;
	int save = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		save = a % 10;
		for (int j = 1; j < b; j++) {
			save *= a;
			save %= 10;
		}
		if (save == 0) {
			cout << 10 << '\n';
		}
		else {
			cout << save << '\n';
		}
	}
	return 0;
}
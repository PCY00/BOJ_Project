#include <iostream>

using namespace std;

int re(int n);

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int num = 5;
	cout << re(num) << '\n';
	return 0;
}

int re(int n) {
	int sum = 0;
	int save;
	for (int i = 0; i < n; i++) {
		cin >> save;
		if (save < 40) {
			sum += 40;
		}
		else {
			sum += save;
		}
	}
	sum /= n;
	return sum;
}
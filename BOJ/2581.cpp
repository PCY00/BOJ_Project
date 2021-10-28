#include <iostream>

using namespace std;

bool p1(int p) {
	int cut = 0;
	for (int i = 1; i <= p; i++) {
		if (p % i == 0) {
			cut++;
		}
	}
	if (cut == 2) {
		return true;
	}
	else {
		return false;
	}
}
int main() {
	int n, m;
	int save = 0, sum = 0;
	cin >> m >> n;
	for (int i = n; i >= m; i--) {
		if (p1(i) == true) {
			sum += i;
			save = i;
		}
	}
	if (save == 0 && sum == 0) {
		cout << "-1" << endl;
		return 0;
	}
	cout << sum << endl << save;
	return 0;
}
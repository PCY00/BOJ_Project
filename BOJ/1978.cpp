#include <iostream>

using namespace std;

bool ck(int p) {
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
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, num;
	int cut = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num;
		if (ck(num) == true) {
			cut++;
		}
	}
	cout << cut << '\n';
	return 0;
}
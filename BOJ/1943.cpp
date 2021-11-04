#include <iostream>

using namespace std;

int gcd(int a, int b) {
	int r = a % b;
	if (r == 0) return b;
	else return gcd(b, r);
}

int main() {
	int n, a, b, save = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		save = gcd(a, b);
		a /= save; b /= save;
		cout << save * a * b << endl;
	}
	return 0;
}
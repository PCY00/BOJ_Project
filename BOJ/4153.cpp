#include <iostream>

using namespace std;

int max(int a, int b, int c);

int main() {
	int a, b, c;
	int MAX = 0;
	while (1) {
		cin >> a >> b >> c;
		if (a == 0 && b == 0 && c == 0) break;
		MAX = max(a, b, c);
		if ((a * a) + (b * b) + (c * c) - (MAX * MAX) == (MAX * MAX)) {
			cout << "right" << '\n';
		}
		else {
			cout << "wrong" << '\n';
		}
	}
	return 0;
}

int max(int a, int b, int c) {
	int m = 0;
	if (a >= b && a >= c) {
		m = a;
	}
	else if (b >= a && b >= c) {
		m = b;
	}
	else {
		m = c;
	}
	return m;
}
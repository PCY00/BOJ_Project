#include <iostream>

using namespace std;

int gcd(int a, int b);
int lcm(int a, int b);

int main() {
	int N;
	cin >> N;
	int N1, N2;
	for (int i = 0; i < N; i++) {
		cin >> N1 >> N2;
		cout << lcm(N1, N2) << " " << gcd(N1, N2) << endl;
	}
	return 0;
}

int gcd(int a, int b) {
	int c;
	while (b != 0) {
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}

int lcm(int a, int b) {
	return (a * b) / gcd(a, b);
}
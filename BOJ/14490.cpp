#include <iostream>
#include <string>

using namespace std;

int max(int a, int b);
int gcd(int c, int d);

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n = 1, m = 0;
	int arr[2] = { 0, };
	int save = 0;
	string s;
	cin >> s;
	for (int i = s.length() - 1; i >= 0; i--) {
		if (s[i] == ':') {
			arr[0] = m;
			n = 0; m = 0;
		}
		else {
			m += (max(s[i] - '0', n));
		}
		n++;
	}
	save = gcd(m, arr[0]);
	cout << m / save << ":" << arr[0] / save << '\n';
	return 0;
}

int max(int a, int b) {
	int m = 1;
	for (int i = 1; i < b; i++) {
		m *= 10;
	}
	m *= a;
	return m;
}

int gcd(int c, int d) {
	if (c % d == 0) {
		return d;
	}
	return gcd(d, c % d);
}
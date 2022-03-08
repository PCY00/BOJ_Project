#include <iostream>

using namespace std;

long long int gcd(long long int a, long long int b);
long long int lcm(long long int c, long long int d);

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long int n;
	cin >> n;
	long long int a, b;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		cout << lcm(a, b) << '\n';
	}
	return 0;
}

long long int gcd(long long int a, long long int b) {
	long long int c = 0;
	while (b != 0) {
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}

long long int lcm(long long int c, long long int d){
	return (c * d) / gcd(c, d);
}
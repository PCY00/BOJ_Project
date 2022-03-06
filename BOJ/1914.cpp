#include <iostream>
#include <cmath>
#include <string>

using namespace std;

void Hanoitower(int n, int from, int by, int end);

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	string str = to_string(pow(2, n));
	int re = str.find('.');
	str = str.substr(0, re);
	str[str.length() - 1] -= 1;
	cout << str.c_str() << '\n';

	if (n <= 20) {
		Hanoitower(n, 1, 2, 3);
	}
	return 0;
}

void Hanoitower(int n, int from, int by, int end) {
	if (n == 1) {
		cout << from << " " << end << '\n';
	}
	else {
		Hanoitower(n - 1, from, end, by);
		cout << from << " " << end << '\n';
		Hanoitower(n - 1, by, from, end);
	}
}
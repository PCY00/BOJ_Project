#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector <int> v;
int arr = 100001;

int b_y(int a, int b, int c) {
	if (a > b) {
		return 0;
	}
	else {
		int m = (a + b) / 2;
		if (v[m] == c) {
			return 1;
		}
		else if (v[m] > c) {
			return b_y(a, m - 1, c);
		}
		else {
			return b_y(m + 1, b, c);
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, m, num, num2;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num;
		v.push_back(num);
	}
	sort(v.begin(), v.end());
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> num2;
		cout << b_y(0, n - 1, num2) << '\n';
	}
	return 0;
}
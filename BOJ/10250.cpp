#include <iostream>

using namespace std;

int init(int h, int w, int n);

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t, h, w, n;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> h >> w >> n;
		cout << init(h, w, n) << '\n';
	}
	return 0;
}

int init(int h, int w, int n) {
	int save = 1;
	int ho, fl;
	ho = (n / h) + 1;
	fl = n % h;
	if (fl == 0) {
		fl = h;
		ho -= 1;
	}
	save = (fl * 100) + ho;
	return save;
}
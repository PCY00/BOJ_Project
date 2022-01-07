#include <iostream>

using namespace std;

int white[101][101] = { 0, };

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int Case, x, y;
	int sum = 0;
	cin >> Case;
	for (int i = 0; i < Case; i++) {
		cin >> x >> y;
		for (int j = x; j < x + 10; j++) {
			for (int k = y; k < y + 10; k++) {
				white[k][j] = 1;
			}
		}
	}
	for (int i = 0; i <= 100; i++) {
		for (int j = 0; j <= 100; j++) {
			if (white[i][j] == 1) sum += 1;
		}
	}
	cout << sum << '\n';
	return 0;
}
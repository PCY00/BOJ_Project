#include <iostream>
#define max 8

using namespace std;

char arr[8][8];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int ck = 0;
	for (int i = 0; i < max; i++) {
		for (int j = 0; j < max; j++) {
			cin >> arr[i][j];
			if (i % 2 == 0 && j % 2 == 0) {
				if (arr[i][j] == 'F') {
					ck++;
				}
			}
			else if (i % 2 != 0 && j % 2 != 0) {
				if (arr[i][j] == 'F') {
					ck++;
				}
			}
		}
	}
	cout << ck << '\n';
	return 0;
}
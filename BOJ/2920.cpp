#include <iostream>

using namespace std;

int main() {
	int num[9];
	int ck = 0;
	for (int i = 1; i <= 8; i++) {
		cin >> num[i];
	}
	for (int i = 1; i < 8; i++) {
		if (num[i] < num[i + 1]) {
			ck++;
		}
		else {
			ck--;
		}
	}
	if (ck == 7) {
		cout << "ascending" << '\n';
	}
	else if (ck == -7) {
		cout << "descending" << '\n';
	}
	else {
		cout << "mixed" << '\n';
	}
	return 0;
}
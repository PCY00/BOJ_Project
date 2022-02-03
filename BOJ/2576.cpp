#include <iostream>
#define num 7

using namespace std;

int main() {
	int ck;
	int sum = 0, save = 100;
	for (int i = 0; i < num; i++) {
		cin >> ck;
		if (ck % 2 != 0) {
			sum += ck;
			if (save >= ck) {
				save = ck;
			}
		}
	}
	if (sum != 0 && save != 100) {
		cout << sum << '\n' << save << '\n';
	}
	else {
		cout << "-1" << '\n';
	}
	return 0;
}
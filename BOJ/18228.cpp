#include <iostream>

using namespace std;

int water[200000];
int pos;

int main() {
	int n;
	int power = 1000000000;
	int result = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> water[i];
		if (water[i] == -1) {
			pos = i;
		}
	}
	for (int i = 0; i < pos; i++) {
		if (water[i] < power) {
			power = water[i];
		}
	}
	result += power;
	power = 1000000000;
	for (int i = pos + 1; i < n; i++) {
		if (water[i] < power) {
			power = water[i];
		}
	}
	result += power;

	cout << result;
	return 0;
}
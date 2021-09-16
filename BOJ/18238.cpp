#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;
	cin >> str;

	char box = 'A';
	int min = 0;
	int count = 0, count2 = 0, result = 0;

	for (int i = 0; i < str.length(); i++) {
		count = abs(str[i] - box);
		count2 = 26 - count;
		if (count < count2) {
			min += count;
		}
		else {
			min += count2;
		}
		box = str[i];
	}
	cout << min;
	return 0;
}
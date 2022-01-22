#include <iostream>
#include <string>

using namespace std;

int result(string str);

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string str;
	cin >> str;
	cout << result(str) << '\n';
	return 0;
}

int result(string str) {
	int ck = 0;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] - 'A' >= 0 && str[i] - 'A' <= 2) {
			ck += 3;
		}
		else if (str[i] - 'A' >= 3 && str[i] - 'A' <= 5) {
			ck += 4;
		}
		else if (str[i] - 'A' >= 6 && str[i] - 'A' <= 8) {
			ck += 5;
		}
		else if (str[i] - 'A' >= 9 && str[i] - 'A' <= 11) {
			ck += 6;
		}
		else if (str[i] - 'A' >= 12 && str[i] - 'A' <= 14) {
			ck += 7;
		}
		else if (str[i] - 'A' >= 15 && str[i] - 'A' <= 18) {
			ck += 8;
		}
		else if (str[i] - 'A' >= 19 && str[i] - 'A' <= 21) {
			ck += 9;
		}
		else if (str[i] - 'A' >= 22 && str[i] - 'A' <= 25) {
			ck += 10;
		}
	}
	return ck;
}
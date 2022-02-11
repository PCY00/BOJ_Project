#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;
	cin >> str;
	int ck = 10;
	for (int i = 1; i < str.length(); i++) {
		if (str[i] == str[i - 1]) {
			ck += 5;
		}
		else {
			ck += 10;
		}
	}
	cout << ck << '\n';
	return 0;
}
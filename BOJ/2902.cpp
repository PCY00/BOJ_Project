#include <iostream>

using namespace std;

int main() {
	string str;
	cin >> str;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] <= 'Z' && str[i] >= 'A') {
			cout << str[i];
		}
	}
	return 0;
}
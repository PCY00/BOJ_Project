#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;
	int a = 0, b = 0;
	string str1;
	cin >> str;
	str1 = str;
	for (int j = 0; j < str.length(); j++) {
		if (str[j] == '1' || str.length() == j) {
			while (1) {
				if (str[j] == '0' || str.length() == j) {
					break;
				}
				str[j] = '0';
				j++;
			}
			a++;
		}
	}
	for (int j = 0; j < str1.length(); j++) {
		if (str1[j] == '0' || str.length() == j) {
			while (1) {
				if (str1[j] == '1' || str1.length() == j) {
					break;
				}
				str1[j] = '1';
				j++;
			}
			b++;
		}
	}
	if (a >= b) {
		cout << b << endl;
	}
	else {
		cout << a << endl;
	}
	return 0;
}
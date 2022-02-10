#include <iostream>
#include <string>

using namespace std;

int main() {
	int ck1 = 0;
	int min = 50;
	string str1, str2;
	cin >> str1 >> str2;
	for (int i = 0; i <= str2.length() - str1.length(); i++) {
		for (int j = 0; j < str1.length(); j++) {
			if (str1[j] != str2[j + i]) {
				ck1++;
			}
		}
		if (ck1 <= min) {
			min = ck1;
		}
		ck1 = 0;
	}
	cout << min << '\n';
	return 0;
}
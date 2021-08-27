#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	int Alphabet[26] = { 0, };
	string str;
	int sum;

	while (cin >> str) {
		for (int i = 0; i < str.size(); i++) {
			if (str[i] >= 'a' && str[i] <= 'z') {
				Alphabet[str[i] - 'a']++;
			}
		}
		str.clear();
	}
	sum = Alphabet[0];
	for (int i = 1; i < 26; i++) {
		if (sum < Alphabet[i]) {
			sum = Alphabet[i];
		}
	}
	for (int i = 0; i < 26; i++) {
		if (Alphabet[i] == sum) {
			cout << (char)(i + 'a');
		}
	}
	cout << endl;
	return 0;
}
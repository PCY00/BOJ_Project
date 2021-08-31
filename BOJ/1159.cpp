#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;
	int N;
	char a;
	int Alphabet[26] = {0, };
	int count = 26;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> str;
		Alphabet[str[0] - 'a']++;
		str.clear();
	}
	for (int i = 0; i < 26; i++) {
		if (Alphabet[i] > 4) {
			a = i + 'a';
			cout << a;
		}
		else {
			count--;
		}
	}
	if (count == 0) {
		cout << "PREDAJA";
	}
	return 0;
}
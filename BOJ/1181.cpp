#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

bool compare(string a, string b) {
	if (a.length() == b.length()) {
		return a < b;
	}
	return a.length() < b.length();
}

int main(void) {
	int n;
	cin >> n;
	string* s = new string[n];
	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}
	sort(s, s + n, compare);
	for (int i = 0; i < n; i++) {
		if (i > 0 && s[i] == s[i - 1]) {
			continue;
		}
		cout << s[i] << endl;
	}
	delete[] s;
	return 0;
}
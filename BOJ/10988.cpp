#include <iostream>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string str;
	int cnt = 0;
	cin >> str;
	for (int i = 0; i < (str.length() / 2); i++) {
		if (str[i] != str[str.length() - (i + 1)]) {
			cnt++;
		}
	}
	if (cnt != 0) {
		cout << "0" << '\n';
	}
	else {
		cout << "1" << '\n';
	}
	return 0;
}
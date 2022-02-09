#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;
	getline(cin, str);
	for (int i = 0; i < str.length(); i++) {
		if (str[i] <= 'z' && str[i] >= 'a') {
			str[i] = (((str[i] - 'a') + 13) % 26) + 'a';
		}
		else if (str[i] <= 'Z' && str[i] >= 'A') {
			str[i] = (((str[i] - 'A') + 13) % 26) + 'A';
		}
	}
	cout << str << '\n';
	return 0;
}
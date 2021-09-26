#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main() {
	string str;
	while (getline(cin, str)) {
		while (str.find("BUG") != -1) {
			str = regex_replace(str, regex("BUG"), "");
		}
		cout << str << endl;
	}
}
#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
	stack <char> s;
	string str;
	while (getline(cin, str)) {
		bool check = true;
		if (str == ".") {
			break;
		}
		for (int i = 0; i < str.length(); i++) {
			if (str[i] == '.') {
				break;
			}
			else if (str[i] == '(' || str[i] == '[') {
				s.push(str[i]);
			}
			if (str[i] == ')') {
				if (!s.empty() && s.top() == '(') {
					s.pop();
				}
				else {
					check = false;
					break;
				}
			}
			else if (str[i] == ']') {
				if (!s.empty() && s.top() == '[') {
					s.pop();
				}
				else {
					check = false;
					break;
				}
			}
		}
		if (s.empty() && check) {
			cout << "yes" << endl;
		}
		else {
			cout << "no" << endl;
		}
		for (;;) {
			if (s.size() == 0) {
				break;
			}
			s.pop();
		}
	}
	return 0;
}
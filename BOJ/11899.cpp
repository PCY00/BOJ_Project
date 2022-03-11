#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
	string str;
	cin >> str;
	stack <char> s;
	for (int i = 0; i < str.length(); i++) {
		if (s.empty()) s.push(str[i]);
		else if (str[i] == '(') {
			s.push(str[i]);
		}
		else {
			if (s.top() == '(') {
				s.pop();
			}
			else {
				s.push(str[i]);
			}
		}
	}
	cout << s.size() << '\n';
	return 0;
}
#include <iostream>
#include <string>
#include <stack>

using namespace std;

void print(stack<char>& s);

int main() {
	stack <char> s;
	string str;
	getline(cin, str);	
	bool tag = false;

	for (char ch : str) {
		if (ch == '<') {
			print(s);
			tag = true;
			cout << ch;
		}
		else if (ch == '>') {
			tag = false;
			cout << ch;
		}
		else if (ch == ' ') {
			print(s);
			cout << ch;
		}
		else if (tag) {
			cout << ch;
		}
		else {
			s.push(ch);
		}
	}
	print(s);
	cout << '\n';
	return 0;
}

void print(stack<char>& s) {
	while (!s.empty()) {
		cout << s.top();
		s.pop();
	}
}
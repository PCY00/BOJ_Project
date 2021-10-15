#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
	int N;
	string str;
	stack <char> s;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> str;
		for (int j = 0; j < str.length(); j++) {
			if (str[j] == '(') {
				s.push(str[j]);
			}
			else if (!s.empty() && str[j] == ')' && s.top() == '(') {
				s.pop();
			}
			else if (s.empty() && str[j] == ')') {
				s.push(str[j]);
			}
		}
		int a = s.size();
		if (!s.empty()) {
			cout << "NO" << endl;
			for (int i = 0; i < a; i++) {
				s.pop();
			}
		}
		else {
			cout << "YES" << endl;
		}
	}
	return 0;
}
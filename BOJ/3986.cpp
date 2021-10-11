#include <iostream>
#include <stack>

using namespace std;

int main() {
	int	N, count = 0;
	stack <char> s;
	string str;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> str;
		for (int j = 0; j < str.length(); j++) {
			if (s.empty()) {
				s.push(str[j]);
			}
			else if (!s.empty()) {
				if (str[j] == 'A') {
					if (s.top() == 'A') {
						s.pop();
					}
					else {
						s.push(str[j]);
					}
				}
				else {
					if (s.top() == 'B') {
						s.pop();
					}
					else {
						s.push(str[j]);
					}
				}
			}
		}
		if (s.empty()) {
			count++;
		}
		for (int i = 0; i = s.size(); i++) {
			s.pop();
		}
	}
	cout << count;
	return 0;
}
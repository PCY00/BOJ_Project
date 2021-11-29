#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cout << fixed;
	cout.precision(2);
	int Case, j = 0;
	string str;
	stack <double> s;
	double save = 0.0, sum = 0.0;
	cin >> Case >> str;
	int* num = new int[Case];
	for (int i = 0; i < Case; i++) {
		cin >> num[i];
	}
	for (int i = 0; i < str.length(); i++) {
		if (str[i] <= 'Z' && str[i] >= 'A') {
			s.push(num[str[i] - 'A']);
		}
		else {
			if (str[i] == '*') {
				save = s.top();
				s.pop();
				sum = save * s.top();
				s.pop();
				s.push(sum);
			}
			else if (str[i] == '+') {
				save = s.top();
				s.pop();
				sum = save + s.top();
				s.pop();
				s.push(sum);
			}
			else if (str[i] == '/') {
				save = s.top();
				s.pop();
				sum = s.top() / save;
				s.pop();
				s.push(sum);
			}
			else if (str[i] == '-') {
				save = s.top();
				s.pop();
				sum = s.top() - save;
				s.pop();
				s.push(sum);
			}
		}
	}
	cout << s.top() << '\n';
	delete[] num;
	return 0;
}
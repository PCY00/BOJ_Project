#include <iostream>
#include <string>
#include <sstream>
#include <stack>

using namespace std;

int main() {
	int N;
	cin >> N;
	string str;
	stringstream str1;
	stack <string> s;
	cin.ignore();
	for (int i = 0; i < N; i++) {
		getline(cin, str);
		str1.str(str);
		while (str1 >> str) {
			s.push(str);
		}
		str1.clear();
		cout << "Case #" << i + 1 << ": ";
		for (int i = s.size() - 1; i >= 0; i--) {
			cout << s.top() << " ";
			s.pop();
		}
		cout << endl;
	}
	return 0;
}
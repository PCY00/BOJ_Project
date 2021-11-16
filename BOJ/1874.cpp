#include <iostream>
#include <stack>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, num;
	int a = 1;
	stack <int> s;
	string str = "";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num;
		if (num >= a) {
			for (;;) {
				if (num + 1 == a) break;
				s.push(a++);
				str += "+\n";
			}
			s.pop();
			str += "-\n";
		}
		else {
			if (s.top() == num) {
				s.pop();
				str += "-\n";
			}
			else {
				cout << "NO";
				return 0;
			}
		}
	}
	cout << str;
	return 0;
}
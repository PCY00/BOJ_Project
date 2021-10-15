#include <iostream>
#include <stack>

using namespace std;

int main() {
	int K, num;
	cin >> K;
	int size = 0;
	stack <int> s;
	for (int i = 0; i < K; i++) {
		cin >> num;
		if (num != 0) {
			s.push(num);
		}
		else if (num == 0 && !s.empty()) {
			s.pop();
		}
	}
	size = s.size();
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += s.top();
		s.pop();
	}
	cout << sum << endl;
	return 0;
}
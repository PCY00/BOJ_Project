#include <iostream>
#include <queue>

using namespace std;

int main() {
	int n;
	cin >> n;
	queue <int> q;
	int save = 0;
	for (int i = 1; i <= n; i++) {
		q.push(i);
	}
	for (int i = n; i > 1; i--) {
		q.pop();
		q.push(q.front());
		q.pop();
	}
	cout << q.front() << endl;
	return 0;
}

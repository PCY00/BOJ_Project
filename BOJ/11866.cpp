#include <iostream>
#include <queue>

using namespace std;

int main() {
	int k, n;
	cin >> k >> n;
	queue <int> q;
	for (int i = 1; i <= k; i++) {
		q.push(i);
	}
	cout << "<";
	while (1) {
		if (q.empty()) {
			break;
		}
		for (int i = 1; i <= n - 1; i++) {
			q.push(q.front());
			q.pop();
		}
		cout << q.front();
		q.pop();
		if (!q.empty()) {
			cout << ",";
		}
	}
	cout << ">";
	return 0;
}
#include <iostream>
#include <deque>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	deque <int> d;
	int N;
	cin >> N;
	int arr[1000] = { 0, };
	for (int i = 1; i <= N; i++) {
		d.push_back(i);
	}
	for (int i = 1; i <= N; i++) {
		arr[i] = d.front();
		d.pop_front();
		if (d.empty()) {
			break;
		}
		d.push_back(d.front());
		d.pop_front();
	}
	for (int i = 1; i <= N; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}
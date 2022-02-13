#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N, cnt;
	int sum = 0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> cnt;
		sum += cnt;
	}
	cout << sum - (N - 1)<< '\n';
	return 0;
}
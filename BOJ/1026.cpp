#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int N;
	int sum = 0;
	int ck[101] = { 0, };
	cin >> N;
	int a[101] = { 0, };
	int b[101] = { 0, };
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < N; i++) {
		cin >> b[i];
		ck[b[i]]++;
	}
	sort(a, a + N, greater<>());
	for (int j = 0; j < N; j++) {
		for (int i = 0; i < 101; i++) {
			if (ck[i] > 0) {
				sum += (a[j] * i);
				ck[i]--;
				break;
			}
		}
	}
	cout << sum << endl;
	return 0;
}
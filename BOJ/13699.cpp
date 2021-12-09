#include <iostream>

using namespace std;

long long arr[36];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int num;
	cin >> num;
	arr[0] = 1;
	for (int i = 1; i <= num; i++) {
		for (int j = 1; j <= i; j++) {
			arr[i] += arr[j - 1] * arr[i - j];
		}
	}
	cout << arr[num] << '\n';
	return 0;
}
#include <iostream>

using namespace std;

int main() {
	int N, count = 1;
	int first = 0, save = 0, sum = 0;
	cin >> N;
	first = N;
	while (1) {
		if (N < 10) {
			N = (N * 10) + N;
		}
		else {
			save = N / 10;
			N = N % 10;
			sum = save + N;
			N = (N * 10) + (sum % 10);
			save = 0;
		}
		if (N == first) {
			break;
		}
		count++;
	}
	cout << count << endl;
	return 0;
}
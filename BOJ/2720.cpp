#include <iostream>

using namespace std;

int main() {
	int T, C;
	int Q = 0, D = 0, N = 0, P = 0;
	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> C;
		Q = C / 25;
		C = C % 25;
		D = C / 10;
		C = C % 10;
		N = C / 5;
		C = C % 5;
		P = C;
		cout << Q << " " << D << " " << N << " " << P << endl;
		Q = 0, D = 0, N = 0, P = 0;
	}
	return 0;
}


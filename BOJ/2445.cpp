#include <iostream>

using namespace std;

int main() {
	int N;

	cin >> N;

	for (int i = 1; i < N + 1; i++) {
		for (int j = 0; j < i; j++) {
			cout << "*";
		}
		for (int k = 0; k < ((2 * N) - (2 * i)); k++) {
			cout << " ";
		}
		for (int n = 0; n < i; n++) {
			cout << "*";
		}
		cout << endl;
	}
	for (int i = 1; i < N; i++) {
		for (int j = N; j > i; j--) {
			cout << "*";
		}
		for (int k = 0; k < 2 * i; k++){
			cout << " ";
		}
		for (int n = 0; n < N - i; n++) {
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
#include <iostream>
#include <string>

using namespace std;

int main() {
	int N;
	cin >> N;
	string* s = new string[N];
	for (int i = 0; i < N; i++) {
		cin >> s[i];
	}
	int L = s[0].length();
	char r[50];
	for (int i = 0; i < L; i++) {
		r[i] = s[0][i];
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < L; j++) {
			if (r[j] == s[i][j]) {
				r[j] = s[i][j];
			}
			else {
				r[j] = '?';
			}
		}
	}
	for (int i = 0; i < L; i++) {
		cout << r[i];
	}
	delete[] s;
	return 0;
}
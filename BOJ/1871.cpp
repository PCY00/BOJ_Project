#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int N;
	int R = 0, R1 = 0;
	int result;
	cin >> N;
	string str;
	for (int i = 0; i < N; i++) {
		cin >> str;
		for (int j = 0; j < 3; j++) {
			str[j] -= 'A';
			R += str[j] * pow(26, 2 - j);
		}
		for (int k = 4; k < 8; k++) {
			str[k] -= '0';
		}
		R1 += ((str[4] * 1000) + (str[5] * 100) + (str[6] * 10) + (str[7] * 1));
		result =abs(R - R1);
		R = R1 = 0;
		if (result <= 100) {
			cout << "nice" << endl;
		}
		else {
			cout << "not nice" << endl;
		}
	}
	return 0;
}
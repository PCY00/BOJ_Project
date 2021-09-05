#include <iostream>

using namespace std;

int main() {
	int A = 5, B = 1, C = 10;
	int T, t;
	int Ccount = 0, Bcount = 0, Acount = 0;

	cin >> T;
	
	t = T % 60;
	T = T / 60;
	if (T == 0) {
		Ccount = t / C;
	}
	if (T >= 5) {
		Acount = T / A;
	}
	T = T % A;
	if (T < 5) {
		Bcount = T / B;
	}
	Ccount = t / C;
	if (t % C != 0) {
		cout << "-1";
	}
	else {
		cout << Acount << " " << Bcount << " " << Ccount << endl;
	}
	return 0;
}
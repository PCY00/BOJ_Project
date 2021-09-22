#include <iostream>

using namespace std;

int main() {
	int N, Fc = 0, Tc = 0;
	int result = 0;
	cin >> N;
	Fc = N / 5;
	N = N % 5;
	Tc = N / 3;
	if (N % 3 == 0){
		result = Fc + Tc;
	}
	else {
		while (1) {
			if (Fc != 0) {
				Fc--;
				N = N + 5;
			}
			Tc = N / 3;
			if (N % 3 == 0) {
				result = Fc + Tc;
				break;
			}
			if(Fc == 0){
				result = -1;
				break;
			}
		}
	}
	cout << result << endl;
	return 0;
}
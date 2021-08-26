#include <iostream>
#include <string>

using namespace std;

int main() {
	string score;
	double sum = 0.0;

	cin >> score;

	for (int i = 0; i < score.length(); i++) {
		switch (score[i]) {
		case 'A':
			sum += 4;
			break;
		case 'B':
			sum += 3;
			break;
		case 'C':
			sum += 2;
			break;
		case 'D':
			sum += 1;
			break;
		case 'F':
			break;
		case '+':
			sum += 0.3;
			break;
		case '-':
			sum -= 0.3;
			break;
		case '0':
			break;
		}
	}
	cout << fixed;
	cout.precision(1);
	cout << sum << "\n";
	return 0;
}
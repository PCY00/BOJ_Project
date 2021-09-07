#include <iostream> 
using namespace std;
int main() {
	int A, B, C;
	int max = 0;
	while (cin >> A >> B >> C) {
		if ((B - A) > (C - B)) {
			max = (B - A) - 1;
		}
		else {
			max = (C - B) - 1;
		}
		cout << max << endl;
		if (cin.eof()) break;
	}
	return 0;
}
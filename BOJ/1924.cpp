#include <iostream>
#include <string>

using namespace std;

int re(int x, int y);
string str[7] = {  "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};

int main() {
	int x, y, save;  // x == month, y == day, save == 일수 저장.
	cin >> x >> y;
	save = re(x, y) % 7;
	cout << str[save] << "\n";
	return 0;
}

int re(int x, int y) {
	int sum = 0;
	for (int i = 1; i <	x; i++) {
		if (i == 4 || i == 6 || i == 9 || i == 11) {
			sum += 30;
		}
		else if (i == 2) {
			sum += 28;
		}
		else {
			sum += 31;
		}
	}
	sum += y;
	return sum;
}
#include <iostream>

using namespace std;

int gcd(int a, int b);
void lcd(int i, int j);

int main() {
	int num1, num2;
	cin >> num1 >> num2;
	cout << gcd(num1, num2) << endl;
	lcd(num1, num2);
	return 0;
}

int gcd(int a, int b) {
	int c;
	while (b != 0) {
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}
void lcd(int i, int j) {
	cout << (i * j) / gcd(i, j) << endl;
}
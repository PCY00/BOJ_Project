#include <iostream>

using namespace std;

int main() {
	int W, count = 0, rcount = 0;

	cin >> W;

	W = 1000 - W;
	
	count = W / 500;
	W = W % 500;
	count += W / 100;
	W = W % 100;
	count += W / 50;
	W = W % 50;
	count += W / 10;
	W = W % 10;
	count += W / 5;
	W = W % 5;
	count += W / 1;

	cout << count;
	return 0;
}
#include <iostream>
#include <array>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int z = 0, o = 0;
	array <int, 4> wood = { 0, };
	for (int i = 0; i < 3; i++) {
		for (int i = 0; i < 4; i++) {
			cin >> wood[i];
			if (wood[i] == 0) z++;
			else if (wood[i] == 1) o++;
		}
		if (z == 1) {
			cout << "A" << '\n';
		}
		else if (z == 2) {
			cout << "B" << '\n';
		}
		else if (z == 3) {
			cout << "C" << '\n';
		}
		else if (z == 4) {
			cout << "D" << '\n';
		}
		else if (z == 0) {
			cout << "E" << '\n';
		}
		z = 0;
		o = 0;
	}
	return 0;
}
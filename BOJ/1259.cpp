#include <iostream>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string num;
	while (1) {
		int ck = 0;
		cin >> num;
		if (num == "0") break;
		for (int i = 0; i < num.length() / 2; i++) {
			if (num[i] != num[num.length() - (i + 1)]) {
				cout << "no" << '\n';
				ck = 1;
				break;
			}
		}
		if (ck == 0) {
			cout << "yes" << '\n';
		}
	}
	return 0;
}
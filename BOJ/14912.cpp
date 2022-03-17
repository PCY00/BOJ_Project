#include <iostream>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, d;
	int ck = 0;
	cin >> n >> d;
	for (int i = 1; i <= n; i++) {
		string str = to_string(i);
		for (int j = 0; j < str.length(); j++) {
			if (str[j] - '0' == d) {
				ck++;
			}
		}
	}
	cout << ck << '\n';
	return 0;
}
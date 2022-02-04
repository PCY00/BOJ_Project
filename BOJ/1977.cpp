#include <iostream>

using namespace std;


int main() {
	int N, M;
	int sum = 0;
	int save = 10001;
	cin >> N >> M;
	for (int i = 1; i <= 100; i++) {
		if (i * i >= N && i * i <= M) {
			sum += (i * i);
			if (save >= i * i) {
				save = i * i;
			}
		}
	}
	if (save != 10001 && sum != 0) {
		cout << sum << '\n' << save << '\n';
	}
	else {
		cout << "-1" << '\n';
	}
	return 0;
}


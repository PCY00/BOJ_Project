#include <iostream>

using namespace std;

bool check[100] = { false, };

int main() {
	int N, count = 0;
	cin >> N;
	int* sit = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> sit[i];
		if (check[sit[i]] == true) {
			count++;
		}
		check[sit[i]] = true;
	}
	cout << count;
	delete[] sit;
	return 0;
}
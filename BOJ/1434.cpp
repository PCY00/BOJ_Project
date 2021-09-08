#include <iostream>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	int* box = new int[n];
	int* book = new int[m];

	for (int i = 0; i < n; i++) {
		cin >> box[i];
	}
	for (int i = 0; i < m; i++) {
		cin >> book[i];
	}
	int remain = 0;
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (box[i] >= book[j]) {
				box [i] = box[i] - book[j];
				book[j] = 0;
			}
		}
		remain += box[i];
	}
	cout << remain;
	delete[] box;
	delete[] book;
	return 0;
}

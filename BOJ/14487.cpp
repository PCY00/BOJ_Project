#include <iostream>

using  namespace std;

int main() {
	int n, result = 0, max = 0;
	cin >> n;
	int* town = new int[n];
	
	for (int i = 0; i < n; i++) {
		cin >> town[i];
		result += town[i];
		if (max <= town[i]) {
			max = town[i];
		}
	}
	result -= max;

	cout << result << endl;
	delete[] town;
	return 0;
}
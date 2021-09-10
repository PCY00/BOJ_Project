#include <iostream>

using namespace std;

int main() {
	int N;
	cin >> N;
	int* count = new int[N];
	int* height = new int[N];

	for (int i = 0; i < N; i++) {
		cin >> height[i];
	}
	int max = 0;
	int save = 0;
	for (int i = 0; i < N; i++) {
		count[i] = 0;
		if (max < height[i]) {
			max = height[i];
			save = 0;
		}
		else if (max > height[i]) {
			save += 1;
			count[i] = save;
		}
	}
	save = 0;
	for (int i = 0; i < N; i++) {
		if (save < count[i]) {
			save = count[i];
		}
	}
	cout << save;
	delete[] count;
	delete[] height;
	return 0;
}
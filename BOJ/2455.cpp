#include <iostream>
#define NUM 4

using namespace std;

int main() {
	int down, get;
	int max = 0, sum = 0;
	for (int i = 0; i < NUM; i++) {
		cin >> down >> get;
		sum -= down;
		if (max < sum) max = sum;
		sum += get;
		if (max < sum) max = sum;
	}
	cout << max << '\n';
	return 0;
}
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int N;
	cin >> N;
	int a, b;
	int max = 1, min =1;
	int arr[1000] = { 0, };
	int brr[1000] = { 0, };
	int as = 0, bs = 0;
	for (int i = 0; i < N; i++) {
		cin >> a >> b;
		as = a; bs = b;
		for (int i = 2; i < 1000; i++) {
			if (a % i == 0) {
				while (1) {
					a = a / i;
					arr[i]++;
					if (a % i != 0) {
						break;
					}
				}
			}
			if (b % i == 0) {
				while (1) {
					b = b / i;
					brr[i]++;
					if (b % i != 0) {
						break;
					}
				}
			}
			if (arr[i] < brr[i]) {
				min *= pow(i, arr[i]);
			}
			else if (arr[i] > brr[i]) {
				min *= pow(i, brr[i]);
			}
			else {
				min *= pow(i, arr[i]);
			}
		}
		max = min * (as / min) * (bs / min);
		cout << max << " " << min << endl;
		max = 1;
		min = 1;
		for (int i = 0; i < 1000; i++) {
			arr[i] = 0; brr[i] = 0;
		}
		as = 0, bs = 0;
	}
	return 0;
}
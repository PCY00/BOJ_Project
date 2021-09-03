#include <iostream>

using namespace std;

int main() {
	int N, n;
	int Lcount = 0, Rcount = 0;
	cin >> N;

	int max = 0;
	
	int arr[50] = { 0, };

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < N; i++) {
		if (max < arr[i]) {
			max = arr[i];
			Lcount++;
		}
	}
	max = 0;
	n = N;
	for (int i = 0; i < (N / 2); i++) {
		int temp = arr[i];
		arr[i] = arr[n - 1];
		arr[n- 1] = temp;
		n--;
	}
	for (int i = 0; i < N; i++) {
		if (max < arr[i]) {
			max = arr[i];
			Rcount++;
		}
	}
	cout << Lcount << endl;
	cout << Rcount << endl;
	return 0;
}
#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N, M;
	int save = 0;
	int save1 = 0;
	cin >> N >> M;
	int* arr = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	for (int j = 0; j < N - 2; j++) {
		for (int k = j + 1; k < N; k++) {
			for (int l = k + 1; l < N; l++) {
				save = arr[j] + arr[k] + arr[l];
				if (save <= M && save >= save1) {
					save1 = save;
				}
			}
		}
	}
	cout << save1 << '\n';
	delete[] arr;
	return 0;
}
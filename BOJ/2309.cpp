#include <iostream>
#include <algorithm>
#define num 9

using namespace std;

int main() {
	int arr[num];
	int sum = 0;
	int save1 = 0;
	int save2 = 0;
	for (int i = 0; i < num; i++) {
		cin >> arr[i];
		sum += arr[i];
	}
	sort(arr, arr + num);
	while (1) {
		int re = sum;
		for (int i = 0; i < num; i++) {
			for (int j = i + 1; j < num; j++) {
				re = re - (arr[i] + arr[j]);
				if (re == 100) {
					save1 = i;
					save2 = j;
					break;
				}
				re = sum;
			}
		}
		break;
	}
	for (int i = 0; i < num; i++) {
		if (save1 != i && save2 != i) {
			cout << arr[i] << '\n';
		}
	}
	return 0;
}
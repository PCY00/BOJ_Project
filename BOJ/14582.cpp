#include <iostream>
#define s 9

using namespace std;

int arr[10] = { 0, };
int brr[10] = { 0, };
bool ck = false;
bool result = false;

int main() {
	int sum1 = 0, sum2 = 0;
	for (int i = 0; i < s; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < s; i++) {
		cin >> brr[i];
	}
	for (int i = 0; i < s; i++) {
		sum1 += arr[i];
		if (sum1 > sum2) {
			ck = true;
		}
		sum2 += brr[i];
		if (sum1 < sum2 && ck == true) {
			result = true;
		}
	}
	cout << (result ? "Yes\n" : "No\n");
	return 0;
}
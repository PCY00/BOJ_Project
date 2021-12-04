#include <iostream>
#include <algorithm>

using namespace std;

int arr[51] = { 0, };

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int Case;
	int student, sum = 0;
	cin >> Case;
	for (int i = 0; i < Case; i++) {
		cin >> student;
		for (int j = 0; j < student; j++) {
			cin >> arr[j];
		}
		sort(arr, arr + student);
		for (int j = 0; j < student - 1; j++) {
			if (sum < arr[j + 1] - arr[j]) {
				sum = arr[j + 1] - arr[j];
			}
		}
		cout << "Class" << " " << i + 1 << '\n';
		cout << "Max " << arr[student - 1] << ", " << "Min " << arr[0] << ", Largest gap " << sum << '\n';
		sum = 0;
	}
	return 0;
}
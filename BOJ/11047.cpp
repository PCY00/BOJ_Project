#include <iostream>
#include <algorithm>

using namespace std;

int arr[11];
int cnt[11];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, k;
	cin >> n >> k;
	int save = k;
	for (int i = n; i >= 1; i--) {
		cin >> arr[i];
	}
	for (int j = 1; j <= n; j++) {
		for (int i = j; i <= n; i++) {
			if (save / arr[i] != 0) {
				cnt[j] = cnt[j] + (save / arr[i]);
				save %= arr[i];
			}
		}
		save = k;
	}
	sort(cnt, cnt + n);
	cout << cnt[1] << '\n';
	return 0;
}
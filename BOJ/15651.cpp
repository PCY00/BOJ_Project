#include <iostream>

using namespace std;

int n, m;
int arr[7] = { 0, };
bool ck[7] = { false, };
void print(int cnt);

int main() {
	cin >> n >> m;
	print(0);
	return 0;
}

void print(int cnt) {
	if (cnt == m) {
		for (int i = 0; i < m; i++) {
			cout << arr[i] << ' ';
		}
		cout << '\n';
		return;
	}
	for (int i = 1; i <= n; i++) {
		ck[i] = true;
		arr[cnt] = i;
		print(cnt + 1);
		ck[i] = false;
	}
}
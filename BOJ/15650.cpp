#include <iostream>

using namespace std;

int n, m;
int arr[9] = { 0, };
bool ck[9] = { false, };

void dfs(int num, int cnt);

int main() {
	cin >> n >> m;
	dfs(1, 0);
	return 0;
}

void dfs(int index, int cnt) {
	if (cnt == m) {
		for (int i = 0; i < m; i++) {
			cout << arr[i] << ' ';
		}
		cout << '\n';
		return;
	}
	for (int i = index; i <= n; i++) {
		if (!ck[i]) {
			ck[i] = true;
			arr[cnt] = i;
			dfs(i + 1, cnt + 1);
			ck[i] = false;
		}

	}
}


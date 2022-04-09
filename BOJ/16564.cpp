#include <iostream>
#include <algorithm>

using namespace std;

void dfs( int cnt);

int n, m;
int arr[10] = { 0, };
int save[10] = { 0, };
bool ck[10] = { false, };

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> save[i];
	}
	sort(save, save + n);
	dfs(0);
	return 0;
}

void dfs(int cnt) {
	if (cnt == m) {
		for (int i = 0; i < m; i++) {
			cout << save[arr[i]] << ' ';
		}
		cout << '\n';
		return;
	}
	for (int i = 0; i < n; i++) {
		if (!ck[i]) {
			ck[i] = true;
			arr[cnt] = i;
			dfs(cnt + 1);
			ck[i] = false;
		}
	}
}
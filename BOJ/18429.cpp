// 나중에 다시 한번 연습

#include <iostream>

using namespace std;

int n, k;
int kit[51];
int result= 0;
bool ck[51];
int weight = 500;

void dfs(int cnt);

int main() {
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> kit[i];
		kit[i] -= k;
	}
	dfs(0);
	cout << result << '\n';
	return 0;
}

void dfs(int cnt) {
	if (cnt == n) {
		result++;
	}
	else {
		for (int i = 0; i < n; i++) {
			if (!ck[i]) {
				ck[i] = true;
				if (weight + kit[i] >= 500) {
					weight += kit[i];
					dfs(cnt + 1);
					weight -= kit[i];
					ck[i] = false;
				}
				else {
					ck[i] = false;
				}
			}
		}
	}
}
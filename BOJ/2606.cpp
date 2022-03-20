#include <iostream>

using namespace std;

int ck[101][101] = { 0, };
bool Num[101] = { false, };
int n, result;

void DFS(int a);

int main() {
	int a, b, k;
	cin >> n >> k;
	for (int i = 0; i < k; i++) {
		cin >> a >> b;
		ck[a][b] = ck[b][a] = 1;
	}
	DFS(1);
	cout << result << '\n';
	return 0;
}

void DFS(int a) {
	Num[a] = true;

	for (int i = 1; i <= n; i++) {
		if (!Num[i] && ck[a][i] == 1) {
			result++;
			DFS(i);
		}
	}
}
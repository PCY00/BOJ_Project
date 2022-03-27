#include <iostream>
#include <vector>
#define max 9

using namespace std;

vector <int> vec;
bool visited[max] = { false, };
int num[max] = { 0, };

void print();
void BT(int cnt, int ck, int end);

int main() {
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		num[i] = i + 1;
	}

	BT(0, m, n);
	return 0;
}

void print() {
	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << " ";
	}
	cout << '\n';
}

void BT(int cnt, int ck, int end) {
	if (cnt == ck) {
		print();
		return;
	}

	for (int i = 0; i < end; i++) {
		if (visited[i] == true) {
			continue;
		}
		visited[i] = true;
		vec.push_back(num[i]);
		BT(cnt + 1, ck, end);
		vec.pop_back();
		visited[i] = false;
	}
}
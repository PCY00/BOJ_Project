#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int N, K;						//N = 동전 종류, K = 가치
vector<int> save;				//저장

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int num, cnt = 0;
	cin >> N >> K;

	for (int i = 0; i < N; i++) {
		cin >> num;
		save.push_back(num);
	}

	sort(save.begin(), save.end(), greater<>());	//내림차순

	for (int i = 0; i < N; i++) {
		if (K / save[i] > 0) {
			cnt += K / save[i];
			K %= save[i];
		}
	}
	cout << cnt << '\n';

	return 0;
}
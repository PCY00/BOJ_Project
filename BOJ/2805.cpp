#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int N, M;										//N = 나무의 수, M = 상근이가 집에 가져가는 나무 길이
long long L = 1, R = 0, mid = 0, mid_save = 0; //이분탐색을 위한 변수
vector<long long> save;							//나무의 길이 저장

int solve();

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long tree_inch;

	cin >> N >> M;
	save.resize(N + 1);

	for (int i = 0; i < N; i++) {
		cin >> tree_inch;
		save.push_back(tree_inch);
		R = max(tree_inch, R);
	}

	cout << solve() << '\n';

	return 0;
}

int solve() {
	while (L <= R) {
		long long M_sum = 0;
		mid = (L + R) / 2;
		for (int i = 0; i < save.size(); i++) {
			if (save[i] - mid > 0) {
				M_sum += (save[i] - mid);
			}
		}
		if (M_sum >= M) {
			L = mid + 1;
			if (mid_save < mid) {							//가장 큰 것을 계속해서 업로드
				mid_save = mid;
			}
		}
		else if (M_sum < M) {
			R = mid - 1;
		}
	}
	return mid_save;
}
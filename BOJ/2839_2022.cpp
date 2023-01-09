#include <iostream>
#include <cmath>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N, save, cnt1 = 0, cnt2 = 0;
	cin >> N;
	save = N;

	if (N % 5 == 0 || N % 3 == 0) {								//한번에 나뉘는거 저장
		if (N % 5 == 0) {
			cnt1 = N / 5;
			N %= 5;
		}
		else if (N % 3 == 0) {
			cnt1 = N / 3;
			N %= 3;
		}
	}

	int ck = 1;
	int i = 1;
	while(1) {													//어려번 나뉘는거 저장
		ck = (save - (5 * i));
		if (ck < 0) break;
		ck %= 3;
		if (ck == 0) {
			cnt2 = i + (save - (5 * i)) / 3;
		}
		i++;
	}
	
	int result = 0;
	
	result = min(cnt1, cnt2);									//위에 두개 비교 작은거 저장
	
	if (result == 0) {
		result = max(cnt1, cnt2);								//0일때가 제일 작은데 0일땐 답이 아니니 0일땐 가장 큰거 저장
	}
	
	if (result != 0) {
		cout << result << '\n';
	}
	else {
		cout << -1 << '\n';
	}

	return 0;
}
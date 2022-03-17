#include <iostream>

using namespace std;

int ck[101] = { 0, };

int main() {
	int Case;
	cin >> Case;
	int cnt = 0;
	for (int i = 0; i < Case; i++) {
		cin >> ck[i];
	}
	for (int j = Case - 1; j >= 0; j--) {
		while (ck[j] <= ck[j - 1]) {            // 하나씩 줄여가면서 ck[j]보다 하나 작을때 까지 cnt++ 해주면서 실행
			ck[j - 1]--;
			cnt++;
		}
	}
	cout << cnt << '\n';
	return 0;
}

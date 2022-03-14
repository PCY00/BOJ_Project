#include <iostream>
#include <string>

using namespace std;

int main() {
	int n, m;
	int ck1, ck2; //ck1은 숫자 범위, ck2는 중복숫자 검출
	while (cin >> n >> m) {
		ck1 = 0, ck2 = 0;
		for (int i = n; i <= m; i++) {
			ck1++;
			int ck = 0;
			int arr[10] = { 0, };
			string str = to_string(i);
			for (int j = 0; j < str.length(); j++) {
				ck = str[j] - '0';
				arr[ck]++;
			}
			for (int j = 0; j < 10; j++) {
				if (arr[j] >= 2) {
					ck2 += 1;
					break;
				}
			}
		}
		cout << ck1 - ck2 << '\n';
	}
	return 0;
}
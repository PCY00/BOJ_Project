#include <iostream>

using namespace std;

int main() {
	int N, M, J, num;
	cin >> N >> M >> J;

	int move = 1;
	int result = 0;
	
	for (int i = 0; i < J; i++) {
		cin >> num;
		while (1) {
			bool check = false;
			for (int j = move; j <= move + (M - 1); j++) {
				if (j == num) {
					check = true;
					break;
				}
			}
			if (check) {
				break;
			}
			if (move > num) {
				move--;
			}
			else {
				move++;
			}
			result++;
		}
	}
	cout << result << endl;
	return 0;
}

//1시간동안 풀어도 풀리지 않아 밑 블로그 참고하여 이해했음.
//출처 https://jaimemin.tistory.com/1100
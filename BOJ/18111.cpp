#include <iostream>
#include <cmath>

using namespace std;

int N, M, B;							// N = 집터 세로 M = 집터 가로 B = 처음 인벤에 들어있는 블럭갯수
int map[501][501] = { 0, };				// 디폴트 맵
int map_r[501][501] = { 0, };			// 수정 맵
int save[257] = { 0, };					// 같은 블럭 높이 갯수

int sec(int MAX);

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int Max = 0, Min = 99999999;
	int H = 0;											//높이

	cin >> N >> M >> B;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> map[i][j];
			Max = max(Max, map[i][j]);					//가장 높은 블럭
			Min = min(Min, map[i][j]);					//가장 낮은 블럭	
		}
	}
	int S = 99999999;
	for (int i = Min; i <= Max; i++) {					//낮은 블럭부터 올라가면서 완전탐색
		int t = sec(i);
		if (S >= t) {
			S = t;
			H = i;											//시간초가 같을 경우 i는 계속 올라가면서 탐색이기 때문에 가장 높은 것을 저장.
		}
	}

	cout << S << " " << H << '\n';
	return 0;
}


int sec(int MAX) {
	int S = 0;
	int B_b = 0, B_r = 0;													//B_b는 블록 짓는것 1초, B_r은 블록 없애기 2초
	
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			map_r[i][j] = MAX;
			if (map[i][j] > map_r[i][j]) {
				S = S + (2 * (map[i][j] - map_r[i][j]));
				B_r += (map[i][j] - map_r[i][j]);
			}
			else if (map[i][j] < map_r[i][j]) {
				S = S + (1 * (map_r[i][j] - map[i][j]));
				B_b += (map_r[i][j] - map[i][j]);
			}
		}
	}
	if (B_r + B >= B_b) {
		return S;
	}
	else {
		return 99999999;
	}
}
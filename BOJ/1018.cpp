#include <iostream>

using namespace std;

char arr[50][50];

char Warr[8][8] = {
	'W','B','W','B','W','B','W','B',
	'B','W','B','W','B','W','B','W',
	'W','B','W','B','W','B','W','B',
	'B','W','B','W','B','W','B','W',
	'W','B','W','B','W','B','W','B',
	'B','W','B','W','B','W','B','W',
	'W','B','W','B','W','B','W','B',
	'B','W','B','W','B','W','B','W'
};

char Barr[8][8] = {
	'B','W','B','W','B','W','B','W',
	'W','B','W','B','W','B','W','B',
	'B','W','B','W','B','W','B','W',
	'W','B','W','B','W','B','W','B',
	'B','W','B','W','B','W','B','W',
	'W','B','W','B','W','B','W','B',
	'B','W','B','W','B','W','B','W',
	'W','B','W','B','W','B','W','B'
};

int	Wck(int a, int b);
int Bck(int c, int d);
int result(int e, int f);

int main() {
	int N, M;
	cin >> N >> M;
	int save = 64;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < N - 7; i++) {
		for (int j = 0; j < M - 7; j++) {
			if (save > result(Wck(i, j), Bck(i, j))) {
				save = result(Wck(i, j), Bck(i, j));
			}
		}
	}
	cout << save << '\n';
	return 0;
}

int Wck(int a, int b) {
	int ck = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (arr[a + i][b + j] != Warr[i][j]) {
				ck++;
			}
		}
	}
	return ck;
}

int Bck(int c, int d) {
	int ck = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (arr[c + i][d + j] != Barr[i][j]) {
				ck++;
			}
		}
	}
	return ck;
}

int result(int e, int f) {
	if (e >= f) {
		return f;
	}
	else {
		return e;
	}
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Alarm(int H, int M);

int main() {
	int H, M;

	scanf("%d %d", &H, &M);

	Alarm(H, M);
	return 0;
}

void Alarm(int H, int M) {
	int new_H = 0, new_M = 0;

	if (M < 45) {
		if (H <= 0) {
			new_H = 23;
		}
		else {
			new_H = H - 1;
		}
		new_M = M + 15;
	}
	else {
		new_H = H;
		new_M = M - 45;
	}
	printf("%d %d", new_H, new_M);
}

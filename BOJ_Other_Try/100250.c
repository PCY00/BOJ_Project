#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int T, W, H, N;

	scanf("%d", &T);

	for (int i = 0; i < T; i++) {
		int room = 0, floor = 0;
		scanf("%d %d %d", &H, &W, &N);

		if (N % H > 0) {
			room = (N / H) + 1;
		}
		else {
			room = N / H;
		}

		if (N % H == 0) {
			floor = H * 100;
		}
		else {
			floor = (N % H) * 100;
		}

		printf("%d\n", floor+room);
	}

	return 0;
}

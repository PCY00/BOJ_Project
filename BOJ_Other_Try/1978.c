#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N, result = 0;
	
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		int num, ck = 0;
		scanf("%d", &num);

		for (int j = 1; j <= num; j++) {
			if (num % j == 0) {
				++ck;
			}
		}
		if (ck == 2) {
			++result;
		}
	}

	printf("%d", result);
	return 0;
}


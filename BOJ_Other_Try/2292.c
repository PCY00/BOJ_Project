#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N;
	int cnt = 1;
	scanf("%d", &N);


	int i = 1, j = 1;
	while (1) {
		if (N <= i) {
			break;
		}
		i += (6*j);
		++j;
		++cnt;
	}

	printf("%d", cnt);

	return 0;
}

#include <stdio.h>

int main() {
	char N[100];
	int i = 0;

	fgets(N, 100, stdin);


	for (i = 0; i < 100; i++) {
		if (N[i] == '\0') {
			break;
		}
	}

	for (int j = 1; j <= i; j++) {
		printf("%c", N[j - 1]);
		if (j % 10 == 0) {
			printf("\n");
		}
	}
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int arr[8];
	int a = 0, b = 0;
	for (int i = 0; i < 8; i++) {
		scanf("%d", &arr[i]);

		if (arr[i] == i+1) {
			++a;
		}
		else if (arr[i] == 8 - i) {
			++b;
		}
	}

	if (a == 8) {
		printf("ascending");
	}
	else if (b == 8) {
		printf("descending");
	}
	else {
		printf("mixed");
	}
	return 0;
}

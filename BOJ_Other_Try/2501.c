#include <stdio.h>

int main() {
	int p, k, k_check = 0, result = 0;

	scanf_s("%d %d", &p, &k);

	for (int i = 1; i <= p; i++) {
		if (p % i == 0) {
			++k_check;
			if (k_check == k) {
				result = i;
				break;
			}
		}
	}

	if (k_check < k) {
		result = 0;
	}

	printf("%d", result);

	return 0;
}

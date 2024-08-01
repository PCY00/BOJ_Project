#include <stdio.h>

int main() {
	int arr[3];

	for (int i = 0; i < 3; i++) {
		scanf("%d", &arr[i]);
	}

	for (int j = 0; j < 3; j++) {
		for (int h = 0; h < 3; h++) {
			if (arr[j] < arr[h]) {
				int temp = arr[j];
				arr[j] = arr[h];
				arr[h] = temp;
			}
		}
	}

	for (int k = 0; k < 3; k++) {
		printf("%d ", arr[k]);
	}
}

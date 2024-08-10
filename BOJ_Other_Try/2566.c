#include <stdio.h>

int main() {
	int arr[9][9];
	int save_i = 0, save_j = 0, max = 0;

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			scanf_s("%d", &arr[i][j]);
			if (max < arr[i][j]) {
				max = arr[i][j];
				save_i = i;
				save_j = j;
			}
		}
	}

	printf("%d\n%d %d", max, save_i + 1, save_j + 1);

	return 0;
}

#include <stdio.h>



int arr[1000001] = { 0, };



int main(void) {

	int n, m, i, j;

	arr[0] = 1; arr[1] = 1;

	scanf("%d %d", &n, &m);

	for (i = 2; i <= m; i++) {

		if (arr[i] == 1) {

			continue;

		}
		else {

			for (j = 2; i * j <= m; j++) {

				arr[i * j] = 1;

			}

		}

	}

	for (i = n; i <= m; i++) {

		if (arr[i] == 0) {

			printf("%d\n", i);

		}

	}

	return 0;

}
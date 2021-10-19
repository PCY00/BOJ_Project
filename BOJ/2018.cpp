#include <stdio.h>

int main(void) {
	int N;
	int count = 0, sum = 1;
	scanf_s("%d", &N);
	int start = 1, end = 2;
	while (start <= N) {
		sum += end;
		if (sum == N) {
			count++;
			start++;
			end = start;
			sum = 0;
		}
		else if (sum > N) {
			start++;
			sum = 0;
			end = start;
		}
		else {
			end++;
		}
	}
	printf("%d", count);
	return 0;
}
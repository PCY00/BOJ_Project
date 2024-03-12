#include <stdio.h>

int Multiply(int multiplier, int multiplicand);

int main() {
	int a, b;
	scanf("%d %d", &a, &b);

	printf("%d", Multiply(a, b));
	return 0;
}

// multiplier : 곱할 숫자 , multiplicand : 곱해질 숫자 
int Multiply(int multiplier, int multiplicand) {
	int product = 0;

	while (multiplicand != 0) {
		if (multiplicand & 1) {
			product += multiplier;
		}
		multiplier <<= 1;
		multiplicand >>= 1;
	}

	return product;
}

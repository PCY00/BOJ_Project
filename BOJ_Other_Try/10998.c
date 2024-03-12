/*
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
	int product;

	while (multiplicand != 0) {
		if (multiplicand & 1) {
			product += multiplier;
		}
		multiplier << 1;
		multiplicand >> 1;
	}

	return product;
}
*/
#include <stdio.h>

int multiply(int a, int b) {
	int result = 0;
	while (b != 0) {
		if (b & 1) {
			result += a;
		}
		a <<= 1;
		b >>= 1;
	}
	return result;
}

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", multiply(a, b));
	return 0;
}

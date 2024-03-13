//#include <stdio.h>
//
//#ifdef SUM
//int fun(int a, int b) {
//	return a + b;
//}
//#elif SUB
//int fun(int a, int b) {
//	return a - b;
//}
//#else
//int fun(int a, int b) {
//	return a * b;
//}
//#endif
//
//int main() {
//	int a = 10;
//	int b = 5;
//	printf("result : %d\n", fun(a,b));
//	return 0;
//
//}

#include <stdio.h>

int sum(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
int rem(int a, int b);

int main() {
	int a, b;
	scanf_s("%d %d", &a, &b);
	printf("%d\n%d\n%d\n%d\n%d", sum(a, b), sub(a, b), mul(a, b), div(a, b), rem(a, b));

	return 0;
}

int sum(int a, int b) {
	return a + b;
}

int sub(int a, int b) {
	int result;
	result = a + ((~b) + 1);

	return result;
}

int mul(int a, int b) {
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

int div(int a, int b) {
	return a / b;
}

int rem(int a, int b) {
	return a % b;
}

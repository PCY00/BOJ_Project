#include <stdio.h>

long long Three_sum(long long a, long long b, long long c);

int main() {
	long long a = 0, b = 0, c = 0;
	scanf_s("%lld %lld %lld", &a, &b, &c);

	printf("%lld", Three_sum(a, b, c));
	return 0;
}

long long Three_sum(long long a, long long b, long long c) {
	return a + b + c;
}

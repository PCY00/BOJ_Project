#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N, T, P;
	int Size[6];
	int Tc = 0;

	scanf("%d", &N);
	for (int i = 0; i < 6; i++) {
		scanf("%d", &Size[i]);
	}
	scanf("%d %d", &T, &P);

	for (int i = 0; i < 6; i++) {
		if (Size[i] != 0) {
			if (Size[i] / T <= 0) {
				++Tc;
			}
			else {
				if (Size[i] % T == 0) {
					Tc += (Size[i] / T);
				}
				else {
					Tc += (Size[i] / T) + 1;
				}
			}
		}
	}

	printf("%d\n%d %d", Tc, N / P, N % P);
	return 0;
}


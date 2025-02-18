#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define Len 1000000

int strLen(char* str);

int main() {
	char str[Len];
	int result = 1;
	scanf("%[^\n]s", str);

	int strlen = strLen(str);

	for (int i = 0; i < strlen; i++) {
		if (i > 0 && str[i] == ' ') {
			++result;
		}
	}

	if (str[strlen - 1] == ' ') {
		result -= 1;
	}

	printf("%d", result);
	return 0;
}

int strLen(char* str) {
	int re = 0;
	while (*str != '\0') {
		++str;
		++re;
	}
	return re;
}

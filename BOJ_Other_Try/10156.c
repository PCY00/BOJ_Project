#include <stdio.h>

int main() {
	int price, cnt, have_money, rev;
	
	scanf_s("%d %d %d", &price, &cnt, &have_money);

	if (have_money < price * cnt) {
		rev = ((price * cnt) - have_money);
	}
	else {
		rev = 0;
	}

	printf("%d", rev);
}

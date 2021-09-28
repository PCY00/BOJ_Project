#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main(){
	string str;
	int re = 0;
	int save[2] = { 0, };
	char arr[4] = { 0, };
	for (int i = 0; i < 2; i++) {
		cin >> str;
		for (int j = str.length() - 1; j >= 0; j--) {
			arr[re] = str[j];
			arr[re] = arr[re] - '0';
			save[i] += arr[re] * pow(10, j);
			re++;
		}
		re = 0;
	}
	
	int result = save[0] + save[1];
	if (result > 99 && result < 1000) {
		int a, b, c;
		a = result / 100;
		b = result % 10;
		c = (result % 100) / 10;
		result = ((b * 100) + (c * 10) + a);
	}
	else if (result < 100 && result > 9) {
		int a, b;
		a = result / 10;
		b = result % 10;
		result = ((b * 10) + a);
	}
	else if (result > 999) {
		int a, b, c, d;
		a = result / 1000;
		b = (result % 1000) / 100;
		c = (result % 100) / 10;
		d = result % 10;
		result = ((d * 1000) + (c * 100) + (b * 10) + a);
	}

	cout << result;

	return 0;
}
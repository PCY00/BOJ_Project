#include <iostream>
#include <string>

using namespace std;

int alph[26] = { 3, 2, 1, 2, 3, 3, 2, 3, 3, 2, 2, 1, 2, 2, 1, 2, 2, 2, 1, 2, 1, 1, 1, 2, 2, 1 };
char save[4002];
int a[10000];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string i, her;
	cin >> i >> her;
	int k = 0;
	int s = i.length() + her.length();
	for (int j = 0; j < s; j++) {
		for (;;) {
			save[j] = i[k];
			j++;
			save[j] = her[k];
			break;
		}
		k++;
	}
	for (int j = 0; j < s; j++) {
		a[j] = alph[save[j] - 'A'];
	}
	while (1) {
		if (s == 2) {
			break;
		}
		else {
			for (int j = 0; j < s - 1; j++) {
				a[j] = (a[j] + a[j + 1]) % 10);
			}
			s -= 1;
		}
	}
	cout << a[0] << a[1] << '\n';
	return 0;
}